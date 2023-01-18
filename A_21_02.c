//Banking System Denominations Program

#include<stdio.h>
int main()
{
	int n,rs10=0,rs20=0,rs50=0,rs100=0;
	printf("Enter the amount: ");
	scanf("%d",&n);
	if(n%10!=0)
	{
		printf("NOT possible!!!");
		return 1;
	}
	while(n>=100 && n!=0)
	{
		rs100++;
		n=n-100;
	}
	
	while(n>=50 && n!=0)
	{
		rs50++;
		n=n-50;
	}

	
	while(n>=20 && n!=0)
	{
		rs20++;
		n=n-20;
	}

	while(n>=10 && n!=0)
	{
		rs10++;
		n=n-10;
	}

	
	//if(rs100>0)
	printf("No of 100 rupees notes: %d\n",rs100);
	//if(rs50>0)
	printf("No of 50 rupees notes: %d\n",rs50);
	//if(rs20>0)
	printf("No of 20 rupees notes: %d\n",rs20);
	//if(rs10>0)
	printf("No of 10 rupees notes: %d\n",rs10);
	
	return 0;
}
