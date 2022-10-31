#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int a[1001]{ 0 };
	int max = 0;

	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::cin >> a[i];
	}

	for (int j = 1; j < n-1; j++)
	{
		if ((a[j - 1] + a[j] + a[j + 1]) > max)
		{
			max = a[j - 1] + a[j] + a[j + 1];
		}
	}

	std::cout << max << std::endl;

	return EXIT_SUCCESS;
}