#pragma once
#include<optional>
#include<string>
#include <vector>
#include"Account.h"

void read_file(const std::string&, std::vector<Account>&);
std::ostream& operator<<(std::ostream&, std::vector<Account>&);
void input_data(std::vector<Account>, const int&);
void menu(std::vector<Account>, const int&);