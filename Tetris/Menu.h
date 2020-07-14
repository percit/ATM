#pragma once
#include "Account.h"
#include <vector>
class Menu : public Account {
	
public:
	void input_data(std::vector<Account*>, const int& );
	void menu(std::vector<Account*>, const int&);



};