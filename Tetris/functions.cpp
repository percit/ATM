#include "functions.h"
#include "Menu.h"
#include<fstream>
#include<vector>
/*
std::optional<std::string> read_file(const std::string& filepath) {	//to trzeba naprawic, bo to donikad daje ten plik

	Account temp;
	std::ifstream stream(filepath);
	std::string buffer;
	std::vector<Account> base;
	base.reserve(10);
	while (true) {
		if (getline(stream, buffer))
		{
			temp.set_account_nr(buffer);	//ten buffer to cos nie tak, jakas konwersje ze stringa na int trza
			getline(stream, buffer);
			temp.set_PIN(buffer);
			getline(stream, buffer);
			temp.set_balance(buffer);
			base.emplace_back(temp);
		}
		else
			break;


	}
	stream.close();
	return{};
}
*/