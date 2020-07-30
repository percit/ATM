#include<iostream>
#include <vector>
#include <string>
#include "Account.h"
#include "functions.h"

int main() {
	std::vector<Account> base;
	read_file("lista.txt", base);
	std::cout << base << std::endl;





	return 0;
}