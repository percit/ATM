#include "functions.h"
#include<fstream>


void read_file(const std::string& filepath, std::vector<Account>& Vector) {	
	Account temp;
	std::ifstream stream(filepath);
	std::string buffer;
	int lines_amount = 0;
	while (true) {
		if (getline(stream, buffer))
		{
			temp.set_account_nr(buffer);	
			getline(stream, buffer);
			temp.set_PIN(buffer);
			getline(stream, buffer);
			temp.set_balance(buffer);
			getline(stream, buffer);
			temp.set_name(buffer);
			Vector.emplace_back(temp);										
			lines_amount++;
		}
		else
			break;


	}
	stream.close();
	
}

std::ostream& operator<<(std::ostream& os, std::vector<Account>& v)
{
	os << "[";
	for (int i = 0; i < v.size(); ++i) {
		os << v[i];
		if (i != v.size() - 1)
			os << std::endl;
	}
	os << "]\n";
	return os;
}

void input_data(std::vector<Account> data, const int& amount) {	//amount to liczba osob w bazie danych
	int  client_nr = 0, PIN = 0, i = 0;
	long long int account_nr = 0;
	std::cout << "Please write your account number to the console" << std::endl;
	std::cin >> account_nr;
	while ((client_nr < amount) && (account_nr = !data[client_nr].get_account_nr())) {	
		client_nr++;
	}
	if (client_nr == amount) {
		std::cout << "no account associated with that account number" << std::endl;
	}
	std::cout << "Please enter your PIN" << std::endl;
	std::cin >> PIN;
	while ((i < 3) && (PIN = !data[client_nr].get_PIN())) {
		std::cout << "Wrong PIN, please reenter your PIN" << std::endl;
		std::cin >> PIN;
		i++;
		if (i == 3)
			std::cout << "zly pin 3 razy, dzwonie na bagiety" << std::endl;
	}

}

void menu(std::vector<Account> data, const int& amount) {
	int choice = 0, client_nr = 0, money = 0;									
	input_data(data, amount);
	while (true) {
	std::cout << "For checkin your bank balance, press 0, for withdrawing press 1, for logging out, press 2" << std::endl;
	std::cin >> choice;
	if (choice == 2) {
		std::cout << "logging out" << std::endl;
		break;
	}
	switch (choice) {
	case 0:
		std::cout << "Your bank balance is " << data[client_nr].get_balance() << "pln" << std::endl;
		system("pause");
		break;
	case 1:
		std::cout << "How much do you want to withdraw?" << std::endl;		
		std::cin >> money;
		data[client_nr].withdraw(money);
		std::cout << "Your bank balance is " << data[client_nr].get_balance() << "pln" << std::endl;
		system("pause");
		break;
	default:
		std::cout << "Wrong input" << std::endl;
		system("pause");
		}
	}

}

bool if_notes(int amount) {		//checks if the amount can be put into NBP notes
	int temp = 0;
	int note[6] = { 200, 100, 50, 20, 10, 1};
	while (amount != 0) {
		for (int i = 0; i < 6; ++i) {
			if (amount > note[i]) {
				temp = static_cast<int>(amount / note[i]);
				amount -= (note[i] * temp);
				std::cout << temp << " * " << note[i] << " NBP note" << std::endl;
			}
		}
	}
	if (amount != 0) {
	return false;
	}
}

