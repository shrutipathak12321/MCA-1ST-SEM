//sinx=x-x^3/3!+x^5/5!-x^7/7!............

#include<stdio.h>
int main()
{
	int i,n=10000;
	double sum=0.0,x,t;
	
	printf("Enter the value of x: ");
	scanf("%lf",&x);
	t=x;
	for(i=1;i<=n;i++)
	{
		sum=sum+t;
		t=(t*(-1)*x*x)/(2*i*(2*i+1));
		
	}
	printf("\nSin(x)= %lf",sum);
	
	return 0;
}
