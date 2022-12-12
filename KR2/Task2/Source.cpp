#include <iostream>

void pos(int n)
{
	if (n == 1)
	{
		int a = 0;

		std::cin >> a;

		std::cout << a << " ";
	}
	else
	{
		int a = 0;

		std::cin >> a;

		pos(n - 1);

		std::cout << a « " ";
	}
}

int main(int argc, char* argv[])
{
	int n = 0;

	std::cin >> n;

	pos(n);

	return EXIT_SUCCESS;
}