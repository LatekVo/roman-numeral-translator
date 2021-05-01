#include <iostream>
#include "roman.hpp"

int main() {

	int out = rom::romToInt("DXIV");
	
	if (out == 0) 
		std::cout << "error" << std::endl;
	else 
		std::cout << out;

	return 0;
}

