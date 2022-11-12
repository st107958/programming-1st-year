#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int a[1000]{ 0 };
	
	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::cin >> a[i];
	}

	for (int j = 0; j < n; j++)
	{
		std::cout << a[n - j - 1] << " ";
	}

	return EXIT_SUCCESS;
}