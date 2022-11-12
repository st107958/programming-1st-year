#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int sum = 0;
	int a[100]{ 0 };
	int pr = 1;
	int max = -101;
	int min = 101;
	int imin = 0;
	int imax = 0;

	std::cin >> n;
	 
	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}

	for (int j = 0; j < n; ++j)
	{
		if (a[j] > 0)
		{
			sum = sum + a[j];
		}
	}

	for (int j = 0; j < n; ++j)
	{
		if (a[j] > max)
		{
			max = a[j];
		    imax = j;
		}

		if (a[j] < min)
		{
			min = a[j];
			imin = j;
		}
	}

	if (imin < imax)
	{
		for (int l = imin + 1; l < imax; ++l)
		{
			pr = pr * a[l];
		}
	}

	else
	{
		for (int l = imax + 1; l < imin; ++l)
		{
			pr = pr * a[l];
		}
	}

	std::cout << sum << " " << pr << std::endl;

	return EXIT_SUCCESS;
}