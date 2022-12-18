#include <iostream>

void h(int s, int max = 0);

int main(int argc, char argv[])
{
	int s = 0;

	std::cin >> s;

	h(s);

	std::cout << std::endl;
}

void h(int s, int max)
{
	if (s % 10 > max)
	{
		max = s % 10;
	}

	s = s / 10;

	if (s != 0) return h(s, max);
	if (s == 0)
	{
		std::cout << max << std::endl;
	}
}