#include<iostream>
#include <vector>
#include <string>
#include "Account.h"
#include "functions.h"

int main() {
	std::vector<Account> base;
	int amount = (read_file("lista.txt", base));
	menu(base, amount);

	return 0;
}