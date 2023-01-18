//compute cos series recursion
#include<stdio.h>

double Cos(double x,int n,double r)
{
	if(n>0)
	{
		r=1-((x*x*r)/(n*(n-1)));
		return Cos(x,n-2,r);
	}
	return r;
}
int main()
{
	int i,n;
	double x,r=1;
	printf("Enter no of terms: ");
	scanf("%d",&n);
	printf("Enter value of x: ");
	scanf("%lf",&x);
	printf("Cos(x)= %.3lf",Cos(x,n,r));
	return 0;
}
