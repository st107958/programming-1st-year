#include <iostream>

int main(int argc, char* argv[]) 
{
	int x = 0;
	int sq = 0;
	int tet = 0;
	
	std::cin >> x;
	
	sq = x * x;
	tet = sq * sq;
	
	std::cout << 1 + x + sq + tet / x + tet << std::endl;
	
	return EXIT_SUCCESS;
}
