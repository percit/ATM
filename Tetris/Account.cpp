#include<stdlib.h>
#include "Account.h"

void Account::set_account_nr(std::string new_account_nr) {
	int temp = atof(new_account_nr.c_str());
	bank_balance = temp;
}
void Account::set_balance(std::string new_balance) {
	int temp = atof(new_balance.c_str());
	bank_balance = temp;
}
void Account::set_PIN(std::string new_PIN) {
	int temp = atof(new_PIN.c_str());
	PIN = temp;
}
void Account::set_name(std::string new_name) {
	name = new_name;
}
int Account::get_account_nr() {
	return account_nr;
}
int Account::get_balance() {
	return bank_balance;
}
int Account::get_PIN() {
	return PIN;
}
std::string Account::get_name() {
	return name;
}
void Account::withdraw(int amount) {
	bank_balance =- amount;
}

std::ostream& operator<<(std::ostream stream, const Account& a) {
	stream << a.account_nr << ", " << a.PIN << ", " << a.bank_balance << ", " << a.name << std::endl;
	return stream;
}

