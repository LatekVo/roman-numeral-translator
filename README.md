# roman-numeral-translator
<br>
A basic roman numeral calculator.<br>
On success, will return an integer with corresponding value (eg.: "DXIV" -> 514)<br>
On error, will return '0', since that value cannot be expressed in roman numeral system<br>
and acts as 'false' boolean in c++.<br>
<br>
An example use case:<br>
```c++
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
```
Will return:<br> 
```
514
```

