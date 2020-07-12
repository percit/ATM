#pragma once
#include<string>
#include<iostream>
class Account {
private:
	int PIN = 0,bank_balance = 0, account_nr = 0;
	std::string name;
public:
	Account() : name("John Smith"),account_nr(1111111111111111), PIN(1111), bank_balance(500) {
		std::cout << "constructor" << std::endl;
	}
	~Account() {
		std::cout << "destructor" << std::endl;
	};
	void set_balance(int);
	int get_balance();
	void set_account_nr(int);
	int get_account_nr();
	void set_PIN(int);
	int get_PIN();
	void withdraw(int);



};