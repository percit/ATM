#pragma once
#include<string>
#include<iostream>
class Account {
private:
	std::string name;
	int bank_balance = 0, PIN = 0, account_nr = 0;
public:
	Account() : name("John Smith"),account_nr(1111111111111111), PIN(1111), bank_balance(500) {
		std::cout << "constructor" << std::endl;
	}
	~Account() {
		std::cout << "destructor" << std::endl;
	};
	void set_balance(std::string);
	int get_balance();
	void set_account_nr(std::string);
	int get_account_nr();
	void set_PIN(std::string);
	int get_PIN();
	void set_name(std::string);
	std::string get_name();
	void withdraw(int);
	friend std::ostream& operator<<(std::ostream stream, const Account&);


};