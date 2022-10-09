#include <iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	std::cin >> a >> b >> c >> d;

	if (a != 0)
	{
		if (b != 0)
		{
			if (c*(-(b/a)) + d != 0)
			{
				std::cout << -(b / a) << std::endl;
			}

			else
			{
				std::cout << "NO" << std::endl;
			}
		}

		else 
		{
			if (d != 0)
			{
				std::cout << 0 << std::endl;
			}
			else
			{
				std::cout << "NO" << std::endl;
			}
		}
	}
	
	else
	{
		if (b != 0)
		{
			std::cout << "NO" << std::endl;
		}

		else
		{
			std::cout << "INF" << std::endl;
		}
	}

	return EXIT_SUCCESS;
}