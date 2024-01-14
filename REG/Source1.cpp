#include "Header.h"
#include <fstream>
#include <string>
void login(std::string log, std::string pas) {
	std::ifstream users;
	users.open("users.txt");
	int c=0;
	std::string a, b;
	while (std::getline(users, a)) {
		std::getline(users, b);
		if (log == a) {
			if (pas == b) {
				std::cout << "You log in" << std::endl;
				c = 1;
				break;
			}
			else {
				std::cout << "Wrong password" << std::endl;
				c = 1;
				break;
			}
		}
	}
	if (c == 0) {
		std::cout << "You are not in database" << std::endl;
	}
	users.close();
}
void reg(std::string log, std::string pas) {
	std::ofstream users;
	users.open("users.txt", std::ios::app);
	users << log <<std::endl << pas <<std::endl;
	std::cout << "5" << std::endl;
	users.close();
}