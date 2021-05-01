#ifndef ROM
#define ROM

#include <string>

namespace rom {
	int romToInt(std::string input) {

		int len = input.size();
		int carry = 0;
		int tmp_cp = 0;
		for (int i = 0; i < len; i++) {
			int tmp = 0;
			switch (input.at(len - i - 1)) {
				case 'I': 
					tmp = 1;
					break;
				case 'V': 
					tmp = 5;
					break;
				case 'X': 
					tmp = 10;
					break;
				case 'L': 
					tmp = 50;
					break;
				case 'C': 
					tmp = 100;
					break;
				case 'D': 
					tmp = 500;
					break;
				case 'M': 
					tmp = 1000;
					break;
				default:
					return 0;
			}
			if (tmp >= tmp_cp) {
				carry += tmp;
			} else {
				carry -= tmp;
			}
			tmp_cp = tmp;
		}
		return carry;
	}
}

#endif
