#include <iostream>
#include <string>

void f(char* s, int n, int k = 0);

int main(int argc, char* argv[])
{
	char s[2000];

	std::cin >> s;

	int n = strlen(s);

	f(s, n);
}

void f(char* s, int n, int k)
{
	if (k == 0)
	{
		std::cout << s[0];
	}

	if (k < n)
	{
		std::cout << "*" << s[k];

		return f(s, n, k + 1);
	}

	if (k >= n)
	{
		std::cout << std::endl;
	}

}