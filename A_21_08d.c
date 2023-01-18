//1/1!+2/2!+3/3!.... upto 10 terms

#include<stdio.h>
#include<math.h>
int fact(int n)
{
	if(n==0)
	return 1;
	else
	return n*fact(n-1);
}
int main()
{
	int i,n;
	float sum=0.0;
	printf("Enter limit: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		sum=sum+ i/(float)fact(i);
				
	}
	printf("SUM= %f",sum);
	return 0;	
}
