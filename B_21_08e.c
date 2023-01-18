// convert decimal number to binary

#include<stdio.h>
int binary(int n)
{
	if(n==0)
	return n;
	else
	return ((n%2)+10*binary(n/2));
}
int main()
{
	int n;
	printf("Enter a decimal number: ");
	scanf("%d",&n);
	printf("\n%d in binary: %d",n,binary(n));
	return 0;
}
