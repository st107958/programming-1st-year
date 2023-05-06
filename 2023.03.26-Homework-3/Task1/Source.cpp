#include <iostream>

struct Point
{
	int x;
	int y;

	Point(int x = 0, int y = 0) : x(x), y(y) {};

	Point(const Point& p) : x(p.x), y(p.y) {};

	~Point() {};

	Point& operator=(const Point& p)
	{
		x = p.x;
		y = p.y;

		return *this;
	}

	void SetX(int px) { x = px; }

	void SetY(int py) { y = py; }

	int DistanceSquared()
	{
		return (x * x + y * y);
	}

	void PrintPoint()
	{
		std::cout << x << " " << y << std::endl;
	}
};

int main(int argc, char* argv[])
{
	int AmountOfPoints = 0;
	Point PArray[100];

	std::cin >> AmountOfPoints;

	for (int i = 0; i < AmountOfPoints; i++)
	{
		std::cin >> PArray[i].x;
		std::cin >> PArray[i].y;
	}

	for (int i = 0; i < AmountOfPoints - 1; i++)
	{
		for (int j = 0; j < AmountOfPoints - i - 1; j++)
		{
			if (PArray[j].DistanceSquared() > PArray[j + 1].DistanceSquared())
			{
				Point c = PArray[j];
				PArray[j] = PArray[j + 1];
				PArray[j + 1] = c;
			}
		}
	}

	for (int i = 0; i < AmountOfPoints; i++)
	{
		PArray[i].PrintPoint();
	}

	return EXIT_SUCCESS;
}