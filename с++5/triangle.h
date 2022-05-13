
#include <iostream>
#include <cmath>
using namespace std;
struct point {
	double x;
	double y;

};
class triangle
{
	point a, b, c;
	double angleA, angleB, angleC;
	double lenght(const point& first, const point& second) {
		return	sqrt(pow((first.x - second.x), 2) + (pow((first.y - second.y), 2)));
	}
public:
	triangle(point A, point B, double angleA, double angleB) {
		this->a = A;
		this->b = B;
		this->angleA = angleA;
		this->angleB = angleB;
		c.x = (tan(angleA) * A.x - A.y - tan(angleB) * B.x + B.y) / (tan(angleA) - tan(angleB));
		c.y = tan(angleA) * (c.x - A.x) + A.y;
		cout << c.x << " " << c.y;

	}

	bool PointOnBorder(const point& t) {
		if((lenght(a, t) + lenght(t, b) == lenght(a, b)) ||
		(lenght(a, t) + lenght(t, c) == lenght(a, c)) ||
		(lenght(b, t) + lenght(t, c) == lenght(b, c)))
		{
			return true;
		}
		return false;
		
	}
	bool CrosseOrdinate() {
		if ((a.y + b.y + c.y) < (abs(a.y) + abs(b.y) + abs(c.y)))
			return true;
		return false;
	}
	bool CrosseAbscissa() {
		if ((a.x + b.x + c.x) < (abs(a.x) + abs(b.x) + abs(c.x)))
			return true;
		return false;
	}
	double GetLenght(int Number) {
		switch (Number)
		{
		case 1:
			return lenght(a, b);
			break;
		case 2:
			return lenght(a, c);
			break;
		case 3:
			return lenght(c, b);
			break;
		default:
			return -1;
			break;
		}
	}
	
};