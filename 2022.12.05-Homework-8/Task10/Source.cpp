#include <iostream>

int del(int** a, int k, int i, int c, int n)
{
	if (i == n - 1)
	{
		if (a[i][1] == k)
		{
			return c + 1;
		}
		else
		{
			return c;
		}
	}
	else
	{
		if (a[i][1] == k)
		{
			return del(a, a[i][0], i + 1, c + 1, n);
		}
		else
		{
			return del(a, k, i + 1, c, n);
		}
	}
}

int main(int argc, char* argv[])
{
	int n = 0;

	std::cin >> n;

	int** a = new int* [n];

	for (int i = 0; i <= n - 1; ++i)
	{
		a[i] = new int[2];
	}

	for (int i = 0; i <= n - 1; ++i)
	{
		std::cin >> a[i][0];
		std::cin >> a[i][1];
	}

	int k = 0;

	std::cin >> k;

	std::cout << del(a, k, k, 1, n);

	for (int i = 0; i <= n - 1; ++i)
	{
		delete[] a[i];
	}

	delete[] a;

	return EXIT_SUCCESS;
}