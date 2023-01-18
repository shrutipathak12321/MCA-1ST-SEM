#include<iostream>
#include<stdio.h>
using namespace std;
class Time
{
	int h,m,s;
	public:
		friend istream &operator>>(istream &cin,Time &t)
		{
			char ch;
			cin>>t.h>>ch>>t.m>>ch>>t.s;			
		}
		friend ostream &operator<<(ostream &cout,Time &t)
		{
			cout<<t.h<<":"<<t.m<<":"<<t.s;		
		}
		void normalise()
		{
			m=m+s/60;
			s=s%60;
			h=h+m/60;
			m=m%60;
		}
		Time operator+(Time t)
		{
			Time temp;
			temp.h=h+t.h;
			temp.m=m+t.m;
			temp.s=s+t.s;
			temp.normalise();
			return temp;
		}
		int operator==(Time &t)
		{
			if(h==t.h && m==t.m && s==t.s)	
			return 1;
			else 
			return 0;		
		}

};
int main()
{
	Time t1,t2,s;
	cout<<"Enter first time(hour:min:sec): ";
	cin>>t1;
	cout<<"\nEnter second time(hour:min:sec): ";
	cin>>t2;
	cout<<"\nThe first time is: ";
	cout<<t1;
	cout<<"\nThe second time is: ";
	cout<<t2;
	s=t1+t2;
	cout<<"\n\nSum of times: ";
	cout<<s;
	if(t1==t2)
	cout<<"\n\nBoth time are same";
	else
	cout<<"\n\nTime are not same";
	return 0;	
}
