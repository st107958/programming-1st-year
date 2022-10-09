#include <iostream>

int main(int argc, char* argv[])
{
	int x1 = 0;
	int y1 = 0;
	int x2 = 0;
	int y2 = 0;

	std::cin >> x1 >> y1 >> x2 >> y2;

	if (x1 == x2)
	{
		if (y1 == y2)
		{
			std::cout << "YES" << std::endl;
		}
		
		else
		{
			std::cout << "YES" << std::endl;
		}
	}

	else
	{
		if (y1 == y2)
		{
			std::cout << "YES" << std::endl;
		}

		else
		{
			std::cout << "NO" << std::endl;
		}
	}

	return EXIT_SUCCESS;
}