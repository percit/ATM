#include<iostream>
#include <vector>
#include <string>
#include "Account.h"
#include "functions.h"
#define AMOUNT 15 //for now I know that we have 15 clients, but read_file() should give that information

int main() {
	std::vector<Account> base;
	read_file("lista.txt", base);
	menu(base, AMOUNT);

	return 0;
}