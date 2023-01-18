#include<iostream>
using namespace std;
class Point
{
	int x,y;
	public:
		Point(int a,int b) // Parameterized Constructor
		{
			x=a;
			y=b;
		}
		Point(const Point& p1)  //Copy Constructor
		{
			x=p1.x;
			y=p1.y;
		}
		int getx()
		{
			return x;
		}
		int gety()
		{
			return y;
		}
		
};
int main()
{
	Point p1(10,20);
	Point p2=p1;
	cout<<"With Parameterized Constructor:";
	cout<<"\np1.x = "<<p1.getx() <<"\np1.y = "<<p1.gety();
	cout<<"\nWith Copy Constructor:";
	cout<<"\np2.x = "<<p2.getx() <<"\np2.y = "<<p2.gety();
	return 0;
}
