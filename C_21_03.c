//bank customer data
#include<stdio.h>
typedef struct customer
{
	int acn;
	char name[30];
	float bal;	
}cust;

void check(cust c[],int n)
{
	int i;
	printf("\nCustomers with balance below 1000: ");
	for(i=0;i<n;i++)
	{
		if(c[i].bal<1000)
		{
			printf("\nAcoount No: %d Name: %s",c[i].acn,c[i].name);
		}
	}
}
int main()
{
	cust c[100];
	int n,i,code,ch,ac;
	float amount;
	printf("Enter the no of customer: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter details of customer-%d: ",i+1);
		printf("\nEnter Account no: ");
		scanf("%d",&c[i].acn);
		printf("Enter Name: ");
		scanf("%s",c[i].name);
		printf("Enter Balance: ");
		scanf("%f",&c[i].bal);
	}
	check(c,n);
	do{
		printf("\n\n\nAre you want to withdraw/deposit money(press 1 for yes press 0 for no!): ");
	scanf("%d",&ch);
	if(ch==1)
	{
		printf("\nEnter your account no: ");
		scanf("%d",&ac);
		printf("Press 1 for deposit and press 0 for withdrawl: ");
		scanf("%d",&code);
		printf("Enter the amount: ");
		scanf("%f",&amount);
		for(i=0;i<n;i++)
		{
			if(c[i].acn==ac)
			{
				if(code==1)
				{
					c[i].bal+=amount;
					printf("\nCurrent balance: %f",c[i].bal);

				}
				else
				{
					if(c[i].bal>=amount)
					{
						c[i].bal-=amount;
						printf("\nCurrent balance: %f",c[i].bal);
					}
					else
					printf("The balance is insufficient for the specified withdrawl.");
				}
			}
		}
	}
	else
	return 0;
	}while(1);
	
	
	return 0;
}
