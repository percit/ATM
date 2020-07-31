#include<stdlib.h>
#include<stdexcept>
#include "Account.h"
#include "functions.h"

void Account::set_account_nr(std::string new_account_nr) {
	long long int temp = 0;
	try {
		temp = std::stoll(new_account_nr);
		account_nr = temp;
	}
	catch (const std::out_of_range& oor) {
		std::cerr << "Out of Range error: " << oor.what() << ' ' << '\n';
	}
}
void Account::set_balance(std::string new_balance) {
	int temp = 0;
	try {
		temp = std::stol(new_balance);
		bank_balance = temp;
	}
	catch (const std::invalid_argument& ia) {
		std::cerr << "Invalid argument: " << ia.what() << ' '  << '\n';
	}

}
void Account::set_PIN(std::string new_PIN) {
	int temp = atof(new_PIN.c_str());
	PIN = temp;
}
void Account::set_name(std::string new_name) {
	name = new_name;
}
long long int Account::get_account_nr() {
	return account_nr;
}
long int Account::get_balance() {
	return bank_balance;
}
int Account::get_PIN() {
	return PIN;
}
std::string Account::get_name() {
	return name;
}
void Account::withdraw(int amount) {
	if (amount >= 10) {
		if (if_notes(amount)) {
			std::cout << "Withdrawal done" << std::endl;
			bank_balance -= amount;
		}
	}
	else
		std::cout << "Can't withdraw this amount of money in standard NBP notes" << std::endl;
}

std::ostream& operator<<(std::ostream& stream, Account& a) {
	stream << a.get_account_nr() << ", " << a.get_PIN() << ", " << a.get_balance() << ", " << a.get_name() << std::endl;
	return stream;
}

