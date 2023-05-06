#include<iostream>

float f(float x, float y) 
{
    return x*x - 2 * y;
}

int main()
{
    float x1, y1,x2, y2, xn, h, yn, f1, f2;
    int i, n;

    std::cout << "Enter Initial Conditions" << std::endl;
    std::cout << "x1 = ";
    std::cin >> x1;
    std::cout << "y1 = ";
    std::cin >> y1;
    std::cout << "Enter calculation point xn = ";
    std::cin >> xn;
    std::cout << "Enter number of steps n = ";
    std::cin >> n;

    h = (xn - x1) / n;

    std::cout.setf(std::ios::fixed);
    std::cout.precision(4);

    std::cout << "\nx1\ty1\tf1\tx2\ty2\tf2\n";

    for (i = 0; i <= n; i++)
    {
        f1 = f(x1, y1);
        x2 = x1 + h / 2;
        y2 = y1 + (h / 2) * f1;
        f2 = f(x2, y2);
        yn = y1 + h * f2;
        std::cout << x1 << "\t" << y1 << "\t" << f1 << "\t" << x2 << "\t" << y2 << "\t" << f2 << std::endl;
        y1 = yn;
        x1 = x1 + h;
    }

    return EXIT_SUCCESS;
}