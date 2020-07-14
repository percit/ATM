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
int Account::get_account_nr() {
	return account_nr;
}
int Account::get_balance() {
	return bank_balance;
}
int Account::get_PIN() {
	return PIN;
}
void Account::withdraw(int amount) {
	bank_balance =- amount;
}

