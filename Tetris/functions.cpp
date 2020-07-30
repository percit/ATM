#include "functions.h"
#include "Menu.h"
#include<fstream>


void read_file(const std::string& filepath, std::vector<Account>& Vector) {	
	Account temp;
	std::ifstream stream(filepath);
	std::string buffer;
	int lines_amount = 0;
	while (true) {
		if (getline(stream, buffer))
		{
			temp.set_account_nr(buffer);	//looks ugly, think of sth better
			getline(stream, buffer);
			temp.set_PIN(buffer);
			getline(stream, buffer);
			temp.set_balance(buffer);
			getline(stream, buffer);
			temp.set_name(buffer);
			Vector.emplace_back(temp);										
			//std::cout << "lines amount: "<< lines_amount << ' ';
			lines_amount++;
		}
		else
			break;


	}
	stream.close();
	
}

std::ostream& operator<<(std::ostream& os, std::vector<Account>& v)
{
	os << "[";
	for (int i = 0; i < v.size(); ++i) {
		os << v[i];
		if (i != v.size() - 1)
			os << std::endl;
	}
	os << "]\n";
	return os;
}
