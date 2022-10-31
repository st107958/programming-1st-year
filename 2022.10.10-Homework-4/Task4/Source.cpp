#include <iostream>

int main(int argc, char* argv[])
{
	int a, b, c, d, e, i, x = 0;

	std::cin >> a >> b >> c >> d >> e;

	for (i = 0; i <= 1000; i++)
	{
		if (((a * i * i * i + b * i * i + c * i + d) == 0) && (i - e != 0))
		{
			x++;
		}
	}

	std::cout << x << std::endl;

	return EXIT_SUCCESS;
}