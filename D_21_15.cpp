#include<iostream>
using namespace std;
class Complex
{
	int real,imag;
	public:
		void input()
		{
			cout<<"Enter the real and imaginary part: ";
			cin>>real>>imag;
		}
		friend Complex sum(Complex,Complex);
		void display()
		{
			cout<<real<<"+"<<imag<<"i\n";
		}
};
Complex sum(Complex a,Complex b)
{
	Complex s;
	s.real=a.real+b.real;
	s.imag=a.imag+b.imag;
	return s;
}
int main()
{
	Complex a,b,s;
	a.input();
	b.input();
	cout<<"Complex Number 1: ";
	a.display();
	cout<<"Complex Number 2: ";
	b.display();
	s=sum(a,b);
	cout<<"\nSum= ";
	s.display();
	return 0;
}
