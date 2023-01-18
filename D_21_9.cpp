#include<iostream>
using namespace std;
inline int sqr(int x)
{
	return x*x;
}
int main()
{
	int x;
	cout<< "Enter Number: ";
	cin>> x;
	cout<<"Square of "<<x <<" is: "<<sqr(x);
	return 0;
}
