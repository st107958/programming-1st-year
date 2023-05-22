#include <iostream>

struct Shape
{
	int a;
	int b;
	int c;

	Shape(int a = 0, int b = 0, int c = 0, int d = 0) : a(a), b(b), c(c) {};

	Shape(const Shape& c) : a(c.a), b(c.b), c(c.c) {};

	~Shape() {};
};

struct Triangle : public Shape
{
	Triangle(int a = 0, int b = 0, int c = 0) : Shape(a, b, c) {};

	double area()
	{
		double hp = 0;

		hp = (a + b + c) / 2;

		return (sqrt(hp * (hp - a) * (hp - b) * (hp - c)));
	}

	~Triangle() {};
};

struct Circle : public Shape
{
	Circle(int a = 0) : Shape(a) {};

	double area()
	{
		return(3.14 * a * a);
	}

	~Circle() {};
};

struct Rectangle : public Shape
{
	Rectangle(int a = 0, int b = 0) : Shape(a, b) {};

	double area()
	{
		return (a * b);
	}

	~Rectangle() {};
};

struct Square : public Rectangle
{
	Square(int a = 0) : Rectangle(a, a) {};

	~Square() {};
};

int main(int argc, char* argv[])
{
	Triangle tr(3, 4, 5);

	std::cout << "Triangle area is " << tr.area() << std::endl;

	Circle c(2);

	std::cout << "Circle area is " << c.area() << std::endl;

	Rectangle r(4, 5);

	std::cout << "Rectangle area is " << r.area() << std::endl;

	Square s(5);

	std::cout << "Square area is " << s.area() << std::endl;

	return EXIT_SUCCESS;
}