#include <iostream>

void pos(int n, int g)
{
	if (n < g * g)
	{
		std::cout << "prime";
	}

	else
	{
		if (n % g == 0)
		{
			std::cout << "composite";
		}
		else
		{
			pos(n, g + 1);
		}
	}
}

int main(int argc, char* argv[])
{
	int n = 0;

	std::cin >> n;

	pos(n, 2);

	return EXIT_SUCCESS;
}