#include <iostream>

int main(int argc, char* argcv[])
{
	int n = 0;
	int m = 0;

	std::cin >> n >> m;

	int** a = new int* [n];
	int** b = new int* [n];

	for (int i = 0; i < n; i++)
	{
		a[i] = new int[m];
	}

	for (int i = 0; i < n; i++)
	{
		b[i] = new int[m];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			std::cin >> a[i][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			std::cin >> b[i][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			a[i][j] = a[i][j] + b[i][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			std::cout << a[i][j] << " ";
		}

		std::cout << std::endl;
	}

	for (int i = 0; i < n; i++)
	{
		delete[] a[i];
	}

	for (int i = 0; i < n; i++)
	{
		delete[] b[i];
	}

	delete[] a;
	delete[] b;

	return EXIT_SUCCESS;
}