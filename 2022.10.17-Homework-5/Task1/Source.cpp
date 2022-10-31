#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int x = 0;
	int k = 0;

	std::cin >> n;

	int a[1001]{ 0 };
	for (int i = 0; i < n; i++)
	{
		std::cin >> a[i];
	}

	std::cin >> x;

	for (int i = 0; i < n + 1; i++)
	{
		if (a[i] == x)
		{
			k++;
		}
	}

	std::cout << k << std::endl;

	return EXIT_SUCCESS;
}