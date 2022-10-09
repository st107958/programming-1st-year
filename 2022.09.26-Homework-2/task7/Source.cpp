#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int m = 0;
	int k = 0;

	std::cin >> n >> m >> k;

	if (k % n == 0)
	{
		if (k % m == 0)
		{
			std::cout << "YES" << std::endl;
		}

		else
		{
			std::cout << "YES" << std::endl;
		}
	}

	else
	{
		if (k % m == 0)
		{
			std::cout << "YES" << std::endl;
		}

		else
		{
			std::cout << "NO" << std::endl;
		}
	}

	return EXIT_SUCCESS;
}