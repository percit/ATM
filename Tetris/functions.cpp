#include "functions.h"
#include "Menu.h"
#include<fstream>
#include<vector>

void read_file(const std::string& filepath, std::vector<Account*>& Vector) {	
	Account temp;
	std::ifstream stream(filepath);
	std::string buffer;
	std::vector<Account> base;
	base.reserve(10);
	while (true) {
		if (getline(stream, buffer))
		{
			temp.set_account_nr(buffer);	
			getline(stream, buffer);
			temp.set_PIN(buffer);
			getline(stream, buffer);
			temp.set_balance(buffer);
			getline(stream, buffer);
			temp.set_name(buffer);
			base.emplace_back(temp);
		}
		else
			break;


	}
	stream.close();
}
