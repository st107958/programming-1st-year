#include <iostream>

int bin(int a, int b);

int main(int argc, char* argv[])
{
    int a = 0;
    int b = 0;

    std::cin >> a >> b;

    std::cout << bin(a, b) << std::endl;
}

int bin(int n, int k)
{
    if (n == k || k == 0) return 1;

    else
    {
        return (bin(n - 1, k - 1) + bin(n - 1, k));
    }
}