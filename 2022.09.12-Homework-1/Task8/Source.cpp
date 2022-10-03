#include <iostream>

int main(int argc, char* argv[]) 
{
	int h1 = 0;
	int m1 = 0;
	int s1 = 0;
	int h2 = 0;
	int m2 = 0;
	int s2 = 0;
	int sum = 0;
	
	std::cin >>h1>>m1>>s1>>h2>>m2>>s2;

	sum = (h2 - h1) * 3600 + (m2 - m1) * 60 + s2 - s1;

	std::cout << sum << std::endl;

	return EXIT_SUCCESS;
}