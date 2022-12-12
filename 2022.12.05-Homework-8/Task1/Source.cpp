#include <iostream>

int min(int a, int b, int c, int d);

int main(int argc, char* argv[])
{
    int x1 = 0;
    int x2 = 0;
    int x3 = 0;
    int x4 = 0;

    std::cin >> x1 >> x2 >> x3 >> x4;

    std::cout << min(x1, x2, x3, x4) << std::endl;
}

int min(int a, int b, int c, int d)
{
    if ((a < b) && (a < c) && (a < d))
    {
        return a;
    }

    else
    {
        int x = a;
        a = b;
        b = c;
        c = d;
        d = x;

        return min(a, b, c, d);
    }
}