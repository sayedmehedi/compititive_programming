#include <iostream>
#include <string>
#include <sstream>

int main()
{

	std::string s = "10";

	int i;
	std::istringstream(s) >> i;

	std::cout << i << '\n';

	return 0;
}
