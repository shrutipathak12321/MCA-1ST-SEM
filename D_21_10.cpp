#include<iostream>
using namespace std;
int vol(int a) //cube
{
	return (a*a*a);
}
int vol(int l,int w,int h)  //cuboid
{
	return (l*w*h);
}
float vol(int r,int h)  //cone
{
	return (3.14*r*r*h/3);	
}
float vol(float r,float h)  //cylinder
{
	return (3.14*r*r*h);
}
float vol(float r)  //sphere
{
	return ((4*3.14*r*r*r)/3);
}
int main()
{
	int a,l,w,h,r1,h1,ch;
	float r,r2,h2;
	while(1)
	{
		cout<<"\n-------Menu-------\n";
		cout<<"1.Volume of CUBE\n";
		cout<<"2.Volume of CUBOID\n";
		cout<<"3.Volume of CONE\n";
		cout<<"4.Volume of CYLINDER\n";
		cout<<"5.Volume of SPHERE\n";
		cout<<"6.Exit\n";
		cout<<"Enter any choice: ";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"Enter the value of edge of the cube: ";
				cin>>a;
				cout<<"\nVolume of the cube: "<<vol(a);
				break;
			case 2:
				cout<<"Enter the value of length, width and height of the cuboid: ";
				cin>>l>>w>>h;
				cout<<"\nVolume of the cuboid: "<<vol(l,w,h);
				break;
			case 3:
				cout<<"Enter the value of radius and height of the cone: ";
				cin>>r1>>h1;
				cout<<"\nVolume of the cone: "<<vol(r1,h1);
				break;
			case 4:
				cout<<"Enter the value of radius and height of the cylinder: ";
				cin>>r2>>h2;
				cout<<"\nVolume of the cylinder: "<<vol(r2,h2);
				break;
			case 5:
				cout<<"Enter the value of radius of the sphere: ";
				cin>>r;
				cout<<"\nVolume of the sphere: "<<vol(r);
				break;
			case 6:
				exit(0);
			default:
				cout<<"You entered a wrong choice";
				break;
		}
	}
	return 0;
}
