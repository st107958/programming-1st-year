#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int k = 0;

	std::cin >> n;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (k < n)
			{
				std::cout << i << " ";
				k++;
			}

		}
	}

	return EXIT_SUCCESS;
}