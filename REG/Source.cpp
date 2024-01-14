#include "Header.h"
#include <iostream>

int main() {
	int a;
	std::string user, pas;
	std::cout << "1. log in"<<std::endl<<"2. Registration"<<std::endl;
	std::cin >> a;
	if (a == 1) {
		std::cout << "Enter login and password" << std::endl;
		std::cin >> user;
		std::cin >> pas;
		login(user, pas);
	}
	else if(a==2){
		std::cout << "Enter login and password" << std::endl;
		std::cin >> user;
		std::cin >> pas;
		reg(user, pas);
	}
}