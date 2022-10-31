#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int sum = 0;
	int f = 1;
	int k = 1;

	std::cin >> n;

	for (int i = 0; i < n + 1; i++)
	{
		sum = sum + (1 / f);
		f = f * k;
		k++;
	}

	std::cout << sum << std::endl;

	return EXIT_SUCCESS;
}