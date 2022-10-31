#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int a[1001]{ 0 };
	int min = 1000;
	int m = 1001;
	int x = 0;

	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::cin >> a[i];
	}
	
	std::cin >> x;

	for (int j = 0; j < n; j++)
	{
		if (x > a[j])
		{
			if (x - a[j] <= min)
			{
				if (x - a[j] == min)
				{
					if (a[j] < m)
					{
						m = a[j];
					}
				}

				if(x - a[j] < min)
				{
					m = a[j];
				}

				min = x - a[j];
			}
		}

		if (x < a[j])
		{
			if (a[j] - x <= min)
			{
				if (a[j] - x == min)
				{
					if (a[j] < m)
					{
						m = a[j];
					}
				}

				if(a[j] - x < min)
				{
					m = a[j];
				}

				min = x - a[j];
			}
		}
	}

	std::cout << m << std::endl;

	return EXIT_SUCCESS;
}