#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int i = 0;

	std::cin >> n;

	do
	{
		int j = 0;
		int k = 0;

		k = n-4;

		do
		{
			std::cout << k << " ";
			k++;
			j++;
		}while(j < 5);

		std::cout << std::endl;
	    i++;
		n++;
	} while (i < 5);

	return EXIT_SUCCESS;
}