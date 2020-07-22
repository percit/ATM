#include "functions.h"
#include "Menu.h"
#include<fstream>


void read_file(const std::string& filepath, std::vector< Account*>& Vector) {	
	Account* temp;
	temp = new Account;
	std::ifstream stream(filepath);
	std::string buffer;
	//std::vector<Account> base;
	//base.reserve(10);
	int ilosc_linii = 0;
	while (true) {
		if (getline(stream, buffer))
		{
			temp->set_account_nr(buffer);	//looks ugly, think of sth better
			getline(stream, buffer);
			temp->set_PIN(buffer);
			getline(stream, buffer);
			temp->set_balance(buffer);
			getline(stream, buffer);
			temp->set_name(buffer);
			Vector.emplace_back(temp);
			std::cout << ilosc_linii << ' ';
			ilosc_linii++;
		}
		else
			break;


	}
	stream.close();
	delete temp;
}

std::ostream& operator<<(std::ostream& os, const std::vector<Account*>& v)
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
