#include <iostream>

int main(int argc, char* argv[])
{
	int v = 0;
	int t = 0;

	std::cin >> v >> t;
	
	std::cout << (109 + (v * t) % 109) % 109 << std::endl;
	
	return EXIT_SUCCESS;
}