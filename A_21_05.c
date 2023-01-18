//Power of a number

#include<stdio.h>
int main()
{
	float n,p,ans=1;
	int i;
	printf("Enter number: ");
	scanf("%f",&n);
	printf("Enter power: ");
	scanf("%f",&p);
	if(n==0 && p<=0)
	{
		printf("undefined!\n");
	}
	else 
	{
		if(p<0)
		{
			p=p*(-1);
			for(i=1;i<=p;i++)
			ans=ans/(float)n;
		}
		else
		for(i=1;i<=p;i++)
			ans=ans*n;
			
		printf("Output= %f\n",ans);
	}
	return 0;
	
}
