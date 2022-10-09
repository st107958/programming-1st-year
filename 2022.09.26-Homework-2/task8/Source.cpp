#include <iostream>
  
int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;

	std::cin >> a >> b >> c;

	if ((a < b + c) && (b < a + c) && (c < a + b))
	{
		if ((a * a == b * b + c * c) || (c * c == b * b + a * a) || (b * b == a * a + c * c))
		{
			std::cout << "right" << std::endl;
		}

		else if ((a * a < b * b + c * c) || (c * c < b * b + a * a) || (b * b < a * a + c * c))
		{
			std::cout << "acute" << std::endl;
		}

		else
		{
			std::cout << "obtuse" << std::endl;
		}
	}

	else
	{
		std::cout << "impossible" << std::endl;
	}

	return EXIT_SUCCESS;
}