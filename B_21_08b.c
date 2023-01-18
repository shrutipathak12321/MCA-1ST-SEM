//Find GCD
#include<stdio.h>
int gcd(int m,int n)
{
	if(n!=0)
	return gcd(n,m%n);
	else
	return m;
}
int main()
{
	int m,n;
	printf("Enter two positive integers: ");
	scanf("%d %d",&m,&n);
	printf("\nGCD of %d and %d is: %d",m,n,gcd(m,n));
	return 0;
}
