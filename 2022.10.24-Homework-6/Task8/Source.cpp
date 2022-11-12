#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int k = 0;
	int a[100000]{ 0 };
	int h = 0;

	std::cin >> n;

	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}

	std::cin >> k;

	if (k < 0)
	{
		for(int l = 0; l < abs(k);++l)
		{
			h = a[0];

			for (int s = 0; s < n-1; ++s)
			{
				a[s] = a[s+1];
			}

			a[n-1] = h;
		}
	}

	else
	{
		for (int l = 0; l < k; ++l)
		{
			h = a[n - 1];

			for (int s = 1; s < n; ++s)
			{
				a[n - s] = a[n - s - 1];
			}

			a[0] = h;
		}
	}

	for (int j = 0; j < n; ++j)
	{
		std::cout << a[j] << " ";
	}

	std::cout << std::endl;

	return EXIT_SUCCESS;
}