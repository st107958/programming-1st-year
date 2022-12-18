#include <iostream>
#include <cstring>

void f(char* s, int i = 0)
{
	if (s[i] == s[strlen(s) - i - 1] && i <= strlen(s) / 2 - 1)
	{
		f(s, i + 1);
	}
	else if (i <= strlen(s) / 2 - 1)
	{
		std::cout << s[i];
		f(s, i + 1);
		std::cout << s[strlen(s) - i - 1];
	}
	else if (i == strlen(s) / 2 && strlen(s) % 2 == 1)
	{
		std::cout << s[i];
	}
}

int main(int argc, char* argv[])
{
	char s[1000]{ 0 };

	std::cin >> s;

	f(s);

	return EXIT_SUCCESS;
}