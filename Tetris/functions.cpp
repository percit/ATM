#include "functions.h"
#include "Menu.h"
#include<fstream>
#include<vector>

std::optional<std::string> read_file( const std::string& filepath) {

	Account temp;
	std::ifstream stream(filepath);
	std::string buffer;
	int buffer_int;
	std::vector<Account> base;
	base.reserve(10);
	while (true) {
		if (getline(stream, buffer))
		{
			temp.set_account_nr(buffer_int);
			getline(stream, buffer);
			temp.set_PIN(buffer_int);
			getline(stream, buffer);
			temp.set_balance(buffer_int);
			base.emplace_back(temp);
		}
		else
			break;


	}
	stream.close();
}
