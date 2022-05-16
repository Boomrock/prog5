#include "Triangle.h"
#pragma region private method
double Triangle::lenght(const point& first, const point& second) {
	return	sqrt(pow((first.x - second.x), 2) + (pow((first.y - second.y), 2)));
}
#pragma endregion



bool Triangle::PointOnBorder(const point& t) {
	if ((lenght(a, t) + lenght(t, b) == lenght(a, b)) ||
		(lenght(a, t) + lenght(t, c) == lenght(a, c)) ||
		(lenght(b, t) + lenght(t, c) == lenght(b, c)))
	{
		return true;
	}
	return false;

}
bool Triangle::CrosseOrdinate() {
	if ((a.y + b.y + c.y) < (abs(a.y) + abs(b.y) + abs(c.y)))
		return true;
	return false;
}
bool Triangle::CrosseAbscissa() {
	if ((a.x + b.x + c.x) < (abs(a.x) + abs(b.x) + abs(c.x)))
		return true;
	return false;
}
void Triangle::WtiteInConsole() {
	cout << "A:" << a.x << " " << a.y << "\n";

	cout << "B:" << b.x << " " << b.y << "\n";
	cout << "C:" << c.x << " " << c.y << "\n";


}
double Triangle::GetLenght(int Number) {
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


