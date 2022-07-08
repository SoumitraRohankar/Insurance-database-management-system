#include<iostream>
using namespace std;
class Shape
{
	public:
		void func()
		{
			cout<<"\nThis is Shape"<<endl;
		}
};
class Polygon:public Shape
{
	public:
		void func()
		{
			cout<<"\nPolygon is Shape"<<endl;
		}
};
class Rectangle:public Polygon
{
	public:
		void func()
		{
			cout<<"\nRectangle is a polygon"<<endl;
		}
};
class Triangle:public Polygon
{
	public:
		void func()
		{
			cout<<"\nTriangle is a polygon"<<endl;
		}
};
class Square:public Polygon
{
	public:
		void func()
		{
			cout<<"\nSquare is a rectangle"<<endl;
		}
};
int main()
{
	Shape s1;
	s1.func();
	Polygon p1;
	p1.func();
	Rectangle r1;
	r1.func();
	Triangle t1;
	t1.func();
	Square sq1;
	sq1.func();
	
	
	return 0;
}
