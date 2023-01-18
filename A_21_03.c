//Hotel room no program

#include<stdio.h>
int main()
{
	int n,x,sum=0,sum1=0;
	printf("Enter last room no: ");
	scanf("%d",&n);
	for(x=1;x<=n;x++)
	{
		if(n*(n+1)==2*x*x) //S(x-1)=S(n)-S(x) sum of n natural no - n(n+1)/2		
		{
			printf("x= %d",x);
			break;
		}
		
	}
	if(x==n+1)
	printf("Does not exist!");
	return 0;	
	
}
