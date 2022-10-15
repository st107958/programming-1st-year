#include <iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 1;

	while (b != 0)
	{
		std::cin >> b;
		a++;
	}

	std::cout << a - 1 << std::endl;

	return EXIT_SUCCESS;
}