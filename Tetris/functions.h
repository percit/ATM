#pragma once
#include<optional>
#include<string>
#include <vector>
#include"Account.h"

int read_file(const std::string&, std::vector<Account>&);	//changed to int and returns number of lines
std::ostream& operator<<(std::ostream&, std::vector<Account>&);
bool input_data(std::vector<Account>, const int&);
void menu(std::vector<Account>, const int&);
bool if_notes(int);