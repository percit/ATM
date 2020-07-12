#include<stdlib.h>
#include "Account.h"

void Account::set_account_nr(int new_account_nr) {
	account_nr = new_account_nr;
}
void Account::set_balance(int new_balance) {
	bank_balance = new_balance;
}
void Account::set_PIN(int new_PIN) {
	PIN = new_PIN;
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

