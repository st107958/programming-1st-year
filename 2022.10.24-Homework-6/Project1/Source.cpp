#include <iostream>

int main(int argc, char* argv[])
{
	int k = 0;
	int a[100]{ 0 };
	int h = 0;
	int t = 0;

	std::cin >> k;

	for (int i = 0; i < k; ++i)
	{
		std::cin >> a[i];
	}

	while (k)
	{
		t = 0;

		for (int i = 0; i < k-1; ++i)
		{
			if (a[i] > a[i + 1])
			{
				h = a[i];
				a[i] = a[i + 1];
				a[i + 1] = h;
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
		std::cout << a[i] << " ";
	}

	return EXIT_SUCCESS;
}