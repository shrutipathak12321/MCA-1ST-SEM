#include<iostream>
#include<string.h>
using namespace std;
class String
{
	char str[20];
	public:
		void input()
		{
			cout<<"Enter string: ";
			cin>> str;
		}
		void display()
		{
			cout<< str;
		}
		String operator+ (String x)
		{
			String s;
			strcat(str,x.str);
			strcpy(s.str,str);
			return s;
		}
};
int main()
{
	String s1,s2,s3;
	s1.input();
	s2.input();
	cout<<"\nFirst string is: ";
	s1.display();
	cout<<"\nSecond string is: ";
	s2.display();
	s3=s1+s2;  //String Concatenated using overloaded '+' operator
	cout<<"\n\nConcatenated String is: ";
	s3.display();
	return 0;
}
