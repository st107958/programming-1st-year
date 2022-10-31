#include <iostream>

int main(int argc, char* argv[])
{
	int n = 1;
	int k = 1;
	int x = 0;
	int x0 = 0;
	int d = 0;

	std::cin >> x;
	x0 = x;

	while(x0 / k != 0)
	{
		k = k * 10;
		d = d + (x % 10) * n;
		n = n * 2;
		x = x / 10;
	}

	std::cout << d << std::endl;

	return EXIT_SUCCESS;
}