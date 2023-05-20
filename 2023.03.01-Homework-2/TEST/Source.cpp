#include <iostream>
#include <stdlib.h>
#include <time.h>

int main(int argc, char* argv[])
{
	srand(time(NULL));

	int x = 0;

	int A[10]{ 0 };

	for (int i = 0; i < 10; i++)
	{
		x = rand() % 10;

		A[i] = x;

		std::cout << A[i] << x << "  ";
	}

	std::cout << std::endl;

	return EXIT_SUCCESS;
}