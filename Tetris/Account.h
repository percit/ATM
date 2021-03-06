#pragma once
#include<string>
#include<iostream>
class Account {
private:
	std::string name;
	int bank_balance = 0, PIN = 0;
	long long int account_nr = 0;
public:
	Account() : name("John Smith"),account_nr(1111111111111111), PIN(1111), bank_balance(500) {
	}
	~Account() {
	};
	void set_balance(std::string);
	long int get_balance();
	void set_account_nr(std::string);
	long long int get_account_nr();
	void set_PIN(std::string);
	int get_PIN();
	void set_name(std::string);
	std::string get_name();
	void withdraw(int);
	friend std::ostream& operator<<(std::ostream& stream, Account&);
};