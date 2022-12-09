#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int b = 0;

	std::cin >> n;

	int** a = new int* [n];

	for (int i = 0; i < n; i++)
	{
		a[i] = new int [n];
	}

	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < n; i++)
		{
			std::cin >> a[j][i];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n;j++)
		{
			b = a[i][j];
			a[i][j] = a[j][i];
			a[j][i] = b;
		}
	}


	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < n; i++)
		{
			std::cout << a[j][i] << " ";
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
