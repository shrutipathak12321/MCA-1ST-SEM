//PASCAL TRIANGLE
#include<stdio.h>
int fact(int n)
{
	if(n==0)
	return 1;
	else
	return n*fact(n-1);
}
int main()
{
	int r,i,j,s,x;
	printf("Enter no of rows: ");
	scanf("%d",&r);
	for(i=0;i<r;i++)
	{
		for(s=r-i;s>=0;s--)
		printf(" ");
		for(j=0;j<=i;j++)
		{
			x= fact(i)/(fact(i-j)*fact(j));
			printf("%d ",x);
		}
		printf("\n");
		
	}
	return 0;
}
