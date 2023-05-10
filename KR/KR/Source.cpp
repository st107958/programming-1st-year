#include <iostream>
#include <math.h>

class Complex {
private:
    double re;
    double im;

public:

    Complex(double re = 0, double im = 0) : re(re), im(im) {};

    Complex(const Complex& c) : re(c.re), im(c.im) {};

    ~Complex() {};

    Complex conj()
    {
        return Complex(re, -im);
    }

    double arg()
    {
        return atan2(im, re);
    }

    double abs()
    {
        return (sqrt(re * re + im * im));
    }

    double abs2()
    {
        return (re * re + im * im);
    }

    Complex operator=(const Complex& c)
    {
        this->re = c.re;
        this->im = c.im;

        return *this;
    }

    Complex operator+(double d)
    {
        return Complex(re + d, im);
    }

    Complex operator-(double d)
    {
        return Complex(re - d, im);
    }

    Complex operator/(double d)
    {
        return Complex(re / d, im / d);
    }

    Complex operator*(double d)
    {
        return Complex(re * d, im * d);
    }

    friend Complex operator+(double d, Complex c)
    {
        return Complex(c.re + d, c.im);
    }

    friend Complex operator-(double d, Complex c)
    {
        return Complex(c.re - d, c.im);
    }

    friend Complex operator*(double d, Complex c)
    {
        return Complex(c.re * d, c.im * d);
    }

    friend Complex operator/(double d, Complex c)
    {
        return Complex((d * c.re) / c.abs(), (d * c.im) / c.abs());
    }

    Complex operator+(Complex c)
    {
        return Complex(re + c.re, im + c.im);
    }

    Complex operator-(Complex c)
    {
        return Complex(re - c.re, im - c.im);
    }

    Complex operator*(Complex c)
    {
        return Complex(re * c.re - im * c.im, re * c.im + im * c.re);
    }

    Complex operator/(Complex c)
    {
        return Complex((re * c.re + im * c.im) / c.abs2(), (-re * c.im + im * c.re) / c.abs2());
    }

    friend std::ostream& operator<<(std::ostream& stream, const Complex& c)
    {
        stream << c.re << " + " << "( " << c.im << " * i " << " )";
        return stream;
    }
};

int main(int argc, char* argv[])
{
    Complex z1(2, 3);
    Complex z2(1, 3);
    int a = 5;

    std::cout << z1 + z2 << std::endl;
    std::cout << z1 - z2 << std::endl;
    std::cout << z1 * a << std::endl;
    std::cout << z1 / z2 << std::endl;

    return EXIT_SUCCESS;
}