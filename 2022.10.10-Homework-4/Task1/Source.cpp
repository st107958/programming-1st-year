#include <iostream>

int main(int argc, char* argv[])
{
	int x = 0;
	int k = 0;
	int n = 0;

	std::cin >> x;

	do
	{
		n++;
		if (x % n == 0)
		{
			++k;
		}

	} while (n < x);

	std::cout << k << std::endl;

	return EXIT_SUCCESS;
}