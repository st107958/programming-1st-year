#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int m = 0;
	int a[1001]{ 0 };
	int a1[100]{ 0 };
	int a2[100]{ 0 };


	std::cin >> n;

	for (int l = 0; l < n; l++)
	{
		std::cin >> a[l];
	}

	std::cin >> m;

	for (int k = 0; k < m; k++)
	{
		std::cin >> a1[k] >> a2[k];
	}

	for (int s = 0; s < m; s++)
	{
		for (int p = a1[s]; p < a2[s] + 1; p++)
		{
			std::cout << a[p-1] << " ";
		}

		std::cout << std::endl;
	}

	return EXIT_SUCCESS;
}