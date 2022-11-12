#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int m = 0;
	int k = 0;
	int h = 0;
	int t = 0;
	int a[30000]{ 0 };
	int b[30000]{ 0 };
	int c[30000]{ 0 };

	std::cin >> n;
	std::cin >> m;

	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}

	for (int i = 0; i < m; ++i)
	{
		std::cin >> b[i];
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (a[i] == b[j])
			{
				c[k] = a[i];
				++k;
			}
		}
	}

	for (int i = 0; i < k-1; ++i)
	{
		for (int l = i+1; l < k; ++l)
		{
			if (c[i] == c[l])
			{
				for (int j = l; j < k - 1; ++j)
				{
					c[j] = c[j + 1];
				}

				k = k - 1;
			}
		}
	}

	while (k)
	{
		t = 0;

		for (int i = 0; i < k - 1; ++i)
		{
			if (c[i] > c[i + 1])
			{
				h = c[i];
				c[i] = c[i + 1];
				c[i + 1] = h;
				t = 1;
			}
		}

		if (t == 0)
		{
			break;
		}

	}

	for (int i = 0; i < k; ++i)
	{
		std::cout << c[i] << " ";
	}

	std::cout << std::endl;

	return EXIT_SUCCESS;
}