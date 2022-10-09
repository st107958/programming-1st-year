#include <iostream>

int main(int argc, char* argv[])
{
	int k = 0;
	int m = 0;
	int n = 0;

	std::cin >> k >> m >> n;

	if (n % k == 0)
	{
	    std::cout << 2 * m * (n / k) << std::endl;
	}
	else
	{
		std::cout << 2 * m * (n / k) + 2 * m * (n % k) << std::endl;
	}

	return EXIT_SUCCESS;
}