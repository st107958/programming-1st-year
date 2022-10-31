#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int a[1001]{ 0 };
	int l = 0;
	int r = 0;
	int max = -1001;
	int kmax = 0;

	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::cin >> a[i];
	}

	std::cin >> l >> r;

	for (int j = l - 1; j < r; j++)
	{
		if (a[j] > max)
		{
			max = a[j];
			kmax = j + 1;
		}
	}

	std::cout << max << " " << kmax << std::endl;

	return EXIT_SUCCESS;
}