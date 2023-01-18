//sum of digits
#include<stdio.h>
int sum_of_digit(int n)
{
	if(n==0)
	return 0;
	else
	return (n%10+ sum_of_digit(n/10));
}
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	printf("\nSum of digits in %d is - %d",n,sum_of_digit(n));
	return 0;
}
