//cosx=1-x^2/2!+x^4/4!-x^8/8!............

#include<stdio.h>
int main()
{
	int i,n=10000;
	double sum=0,x,t;
	
	printf("Enter the value of x: ");
	scanf("%lf",&x);
	t=1;
	for(i=0;i<n;i++)
	{
		sum=sum+t;
		t=(t*(-1)*x*x)/((2*i+2)*(2*i+1));
		
	}
	printf("\nCos(x)= %lf",sum);
	
	return 0;
}
