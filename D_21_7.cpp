#include<iostream>
#include<cstring>
using namespace std;
class String
{
	string str;
	public:
	String(string s)
	{
		str=s;
	}
	void display()
	{
		cout<<str;
	}
	void join(String s1,String s2)
	{
		str=s1.str+s2.str;
	}
};
int main()
{
	String s1("Hello");
	String s2(" World");
	cout<< "First string: ";
	s1.display();
	cout<< "\nSecond string: ";
	s2.display();
	String s(" ");
	cout<<"\n\nAfter Joining the string: ";
	s.join(s1,s2);
	s.display();
	return 0;
}
