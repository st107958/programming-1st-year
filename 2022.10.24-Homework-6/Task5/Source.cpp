#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int a[100000]{ 0 };
	int min = 100001;
	int h = 0;

	std::cin >> n;

	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}

	for (int j = 0; j < n; ++j)
	{
		if (a[j] < min)
		{
			min = a[j];
		}
	}

	while (a[0] != min)
	{
		h = a[n - 1];

		for (int k = 1; k < n; ++k)
		{
			a[n-k] = a[n- k - 1];
		}

		a[0] = h;
	}

	for (int i = 0; i < n; ++i)
	{
		std::cout << a[i] << " ";
	}

	std::cout << std::endl;

	return EXIT_SUCCESS;
}