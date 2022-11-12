#include<iostream>

int main(int argc, char* argv[])
{
	int n, i, x, k = 0;
	int b = 0;
	int a[1001]{};
	int mn = 100000000;
	std::cin >> n;
	for (i = 0; i < n; i++)
	{
		std::cin >> a[i];
	}
	std::cin >> x;
	for (i = 0; i < n; i++)
	{
		if (a[i] == x)
		{
			k = a[i];
		}
	}
	b = a[0];
	if (k == 0)
	{
		for (i = 0; i < n; i++)
		{
			if (abs(a[i] - x) <= mn)
			{
				mn = abs(a[i] - x);
				b = a[i];
			}
		}
		for (i = 0; i < n; i++)
		{
			if (abs(a[i] - x) == mn)
			{
				if (b > a[i])
					b = a[i];
			}
		}
		std::cout << b << std::endl;
	}
	else
	{
		std::cout << k << std::endl;
	}
	return EXIT_SUCCESS;
}