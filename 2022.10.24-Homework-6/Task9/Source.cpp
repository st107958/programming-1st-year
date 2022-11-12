#include <iostream>

int main(int argc, char* argv[])
{
	int k = 0;
	int n = 0;
	int a[100]{ 0 };
	int max = 0;
	int imax = 0;
	int ii = 0;

	std::cin >> n;

	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}

	while (ii < n)
	{
		for (int i = ii; i < n; ++i)
		{
			if (a[i] > max)
			{
				max = a[i];
				imax = i;
			}
		}

		k = k + max * (imax - ii + 1);
		ii = imax + 1;
		max = 0;
	}

	std::cout << k << std::endl;

	return EXIT_SUCCESS;
}