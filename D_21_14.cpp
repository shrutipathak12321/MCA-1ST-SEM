#include<iostream>
using namespace std;
class Swap
{
	int x,y;
	public:
		void input()
		{
			cout<<"Enter two numbers: ";
			cin>>x>>y;
		}
		friend void swap(Swap &t);
		void display()
		{
			cout<<"x = "<<x<<endl;
			cout<<"y = "<<y<<endl;
		}
};
void swap(Swap &t)  //without using third variable
{
	t.x=t.x+t.y;
	t.y=t.x-t.y;
	t.x=t.x-t.y;
}
int main()
{
	Swap t;
	t.input();
	cout<<"Before swapping: \n";
	t.display();
	swap(t);
	cout<<"\nAfter swapping: \n";
	t.display();
	return 0;
}
