#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int a[1000]{ 0 };
	int x = 0;
	int minr = 2001;
	int minch = 1001;

	std::cin >> n;

	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}

	std::cin >> x;

	for (int i = 0; i < n; ++i)
	{
		if (abs(a[i] - x) <= minr)
		{
			if (abs((a[i] - x) == minr) && (a[i]) < minch)
			{
				minch = a[i];
				minr = abs(a[i] - x);
			}

			if (abs(a[i] - x) < minr)
			{
				minch = a[i];
				minr = abs(a[i] - x);
			}
		}
	}

	std::cout << minch << std::endl;

	return EXIT_SUCCESS;
}