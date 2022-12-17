#include <iostream>

void spi(int** a, int rasmer, int otschet = 0, int s = 0, int n = 0)
{
	{
		int i = otschet;
		int j = otschet;

		for (int k = otschet; k < rasmer - n; k++)
		{
			a[i][k] = s + 1;
			s++;
		}

		j = rasmer - n - 1;

		for (int k = otschet + 1; k < rasmer - n; k++)
		{
			a[k][j] = s + 1;
			s++;
		}

		i = rasmer - n - 1;

		for (int k = rasmer - n - 2; k > otschet - 1; k--)
		{
			a[i][k] = s + 1;
			s++;
		}

		j = otschet;

		for (int k = rasmer - n - 2; k > otschet; k--)
		{
			a[k][j] = s + 1;
			s = s + 1;
		}

		if (rasmer / 2 >= n) return spi(a, rasmer, otschet + 1, s, n + 1);

		if (rasmer / 2 < n)
		{
			for (int i = 0; i < rasmer; i++)
			{
				for (int j = 0; j < rasmer; j++)
				{
					if (a[i][j] > 99)
					{
						std::cout << a[i][j] << " ";
					}

					else if (a[i][j] > 9)
					{
						std::cout << a[i][j] << "  ";
					}

					else
					{
						std::cout << a[i][j] << "   ";
					}
				}

				std::cout << std::endl;
			}
		}
	}
}

int main(int argc, char* argv[])
{
	int n1 = 0;

	std::cin >> n1;

	int** a = new int* [n1];

	for (int i = 0; i < n1; i++)
	{
		a[i] = new int[n1];
	}

	spi(a, n1);

	std::cout << std::endl;

	for (int i = 0; i < n1; i++)
	{
		delete[] a[i];
	}

	delete[] a;

	return EXIT_SUCCESS;
}