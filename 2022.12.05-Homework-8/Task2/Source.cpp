#include <iostream>

int phi (int n);

int main(int argc, char* argv[])
{
    int n = 0;

    std::cin >> n;

    std::cout << phi(n) << std::endl;
}

int phi(int n)
{
    if (n == 0 || n == 1) return 1;

    return (phi(n - 1) + phi(n - 2));
}