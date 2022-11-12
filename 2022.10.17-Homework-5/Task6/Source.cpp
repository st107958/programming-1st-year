#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int a[100]{ 0 };
	int b[100]{ 0 };
	int max = -1;
	int maxk = 0;

	std::cin >> n;

	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}

	for (int i = 0; i < n; ++i)
	{
		std::cin >> b[i];
	}

	for (int i = 0; i < n; ++i)
	{
		if (a[i] * b[i] > max)
		{
			max = a[i] * b[i];
			maxk = i + 1;
		}
	}

	std::cout << maxk << std::endl;

	return EXIT_SUCCESS;
}