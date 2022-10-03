#include <iostream>

int main(int argc, char* argv[])
{
	int k = 0;
	int n = 0;

	std::cin >> n >> k;

	std::cout << k % n << std::endl;

	return EXIT_SUCCESS;
}