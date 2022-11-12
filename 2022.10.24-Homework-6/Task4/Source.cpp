#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int k[1001]{ 0 };

	std::cin >> n >> a >> b >> c >> d;

	for (int i = 1; i <= n; i++)
	{
	    k[i] = i;
	}

	for (int j = 0; j <= b - a; j++)
	{
		k[j + a] = b - j;
	}

	for (int l = 0; l <= d - c; l++)
	{
		k[l + c] = d - l;
	}

	for (int p = 1; p <= n; p++)
	{
		std::cout << k[p] << " ";
	}

	std::cout << std::endl;

	return EXIT_SUCCESS;
}