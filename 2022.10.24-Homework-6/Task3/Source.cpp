#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int a[101]{ 0 };
	int r = 0;

	std::cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		std::cin >> a[i];
	}

	std::cin >> r;

	for(int j = 0; j < n; j++)
	{
		if (a[j] < r)
		{
			std::cout << j + 1 << std::endl;
			break;
		}
		j++;

	}

	if (a[n] >= r)
	{
		std::cout << n + 1 << std::endl;
	}

	return EXIT_SUCCESS;
}