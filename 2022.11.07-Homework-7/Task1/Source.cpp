#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int m = 0;
	int sum = 0;

	std::cin >> n >> m;

	int** pa = new int* [n];

	for (int i = 0; i < n; i++)
	{
		pa[i] = new int[m];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			std::cin >> pa[i][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			sum = sum + pa[i][j];
		}
		std::cout << sum << " ";
		sum = 0;
	}

	std::cout << std::endl;

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			sum = sum + pa[j][i];
		}

		std::cout << sum << " ";
		sum = 0;
	}

	std::cout << std::endl;
	std::cout << std::endl;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			std::cout << pa[i][j] << " ";
		}

		std::cout << std::endl;
	}

	for (int i = 0; i < n; i++)
	{
		delete[] pa[i];
	}

	delete[] pa;

	return EXIT_SUCCESS;
}