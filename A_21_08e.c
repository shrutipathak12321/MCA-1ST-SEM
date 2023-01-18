//2.3+3.5+5.7..........
#include<stdio.h>
#include<math.h>
int is_prime(int n)
{
	int i;
	if(n==2)
	return 1;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		return 0;
	}
	return 1;
}
int main()
{
	int n,i,j,sum=0;
	printf("Enter no of terms: ");
	scanf("%d",&n);
	for(i=2;n>0;i++)
	{
		if(is_prime(i))
		{
			for(j=i+1;n>0;j++)
			{
				if(is_prime(j))
				{
					sum=sum+i*j;
					n--;
					break;
				}
			}
		}
			
		
	}
	printf("Sum= %d",sum);
	return 0;	
}
