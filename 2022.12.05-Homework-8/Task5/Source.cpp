#include <iostream>

int ff(int n, int p = 1);

int main(int argc, char* argv[])
{
	int n = 0;

	std::cin >> n;

	if (ff(n))
	{
		std::cout << "YES" << std::endl;
	}

	else
	{
		std::cout << "NO" << std::endl;
	}
}

int ff(int n, int p)
{
	if (p < n) return false;

	if (p == n) return true;

	else
	{
		return (ff(n + 3) + ff(n + 5));
	}
}