#include <iostream>

using namespace std;





class Point
{
public:
	float x;
	float y;
	void Negate(const Point&);
	void SetZero(const Point&);
	bool IsZero();
	Point operator-(const Point&);	Point operator+(const Point&);
	Point operator+=(const Point&);
	Point operator-=(const Point&);
	bool operator == (const Point&);
	bool operator !=(const Point&);
};bool Point::IsZero()
{
	return (x == 0 && y == 0);
}
Point Point::operator-(const Point& other_point)
{
	Point tmp;
	tmp.x = x - other_point.x;
	tmp.y = y - other_point.y;
	return tmp;
}
Point Point::operator+(const Point& other_point)
{
	Point tmp;
	tmp.x = x + other_point.x;
	tmp.y = y + other_point.y;
	return tmp;
}
Point Point::operator+=(const Point& other_point)
{
	Point tmp;
	tmp.x = x + other_point.x;
	tmp.y = y + other_point.y;
	return tmp;
}
Point Point::operator-=(const Point& other_point)
{
	Point tmp;
	tmp.x = x - other_point.x;
	tmp.y = y - other_point.y;
	return tmp;
}
bool Point::operator==(const Point& other_point)
{
	return (x == y);
}
bool Point::operator!=(const Point& other_point)
{
	return (x != y);
}
void Point::Negate(const Point& other_point){
	
	x = x*-1;
	y = y*-1;

}
void Point::SetZero(const Point& other_point){

	x = 0;
	y = 0;
}

void main(){
	Point point;


	getchar();
}