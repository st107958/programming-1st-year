#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int a[100]{ 0 };
	int b[100]{ 0 };
	int ch = 0;
	int tr = 0;
	int k = 0;

	std::cin >> n;

	for (int i = 0 ; i < n; ++i)
	{
		std::cin >> a[i];
	}

	for (int j = 0; j < n; ++j)
	{
		if (a[j] % 2 == 1)
		{
			std::cout << a[j] << " ";
			tr++;
		}

		else
		{
			b[ch] = a[j];
			ch++;
		}
	}

	std::cout << std::endl;

	while (b[k] != 0)
	{
		std::cout << b[k] << " ";
		++k;
	}

	std::cout << std::endl;

	if (ch >= tr)
	{
		std::cout << "YES";
	}
	else
	{
		std::cout << "NO";
	}

	std::cout << std::endl;

	return EXIT_SUCCESS;
}