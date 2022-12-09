#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int b = 0;

	std::cin >> n;

	int** a = new int* [n];

	for (int i = 0; i < n; i++)
	{
		a[i] = new int[n];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			std::cin >> a[i][j];
		}
	}
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n-i; j++)
		{
			b = a[i][j];
			a[i][j] = a[n-j-1][n-i-1];
			a[n-j-1][n-i-1] = b;
		}
	}


	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			std::cout << a[i][j] << " ";
		}

		std::cout << std::endl;
	}

	for (int i = 0; i < n; i++)
	{
		delete[] a[i];
	}

	delete[] a;

	return EXIT_SUCCESS;
}