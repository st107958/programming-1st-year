#include <iostream>

void p(int n, int g)
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
			p(n, g + 1);
		}
	}
}

int main(int argc, char* argv[])
{
	int n = 0;

	std::cin >> n;

	p(n, 2);

	return EXIT_SUCCESS;
}