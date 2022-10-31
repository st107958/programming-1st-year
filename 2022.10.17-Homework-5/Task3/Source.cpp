#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int a[1001]{ 0 };
	int min = 5;
	int max = 0;

	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::cin >> a[i];
		if (a[i] > max)
		{
			max = a[i];
		}
		if (a[i] < min)
		{
			min = a[i];
		}
	}

	for (int j = 0; j < n; j++)
	{
		if (a[j] == max)
		{
			a[j] = min;
		}
	}

	for (int k = 0; k < n; k++)
	{
		std::cout << a[k] << " ";
	}

	return EXIT_SUCCESS;
}