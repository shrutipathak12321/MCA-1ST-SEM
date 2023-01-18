// find third max,5th min and middle element of the array.
#include<stdio.h>
int kth_largest(int a[],int n,int k)
{
	int i,j=0,max=a[0],kthmax;
	while(j<k)
	{
		kthmax=a[0];
		for(i=1;i<n;i++)
		{
			if(j==0)
			{
				if(a[i]>max)
				max=a[i];
				
				kthmax=max;		
			}
			
			else
			{
				if(a[i]>kthmax && a[i]<max)
				kthmax=a[i];
			}
		}
		max=kthmax;
		j++;
	}
	return kthmax;
}

int main()
{
	int n,k,i;
	printf("Enter size of the array: ");
	scanf("%d",&n);
	int num[n];
	for(i=0;i<n;i++)
	{
		printf("\nEnter Element %d: ",i+1);
		scanf("%d",&num[i]);
	}
	printf("\nThe third maximum no is: %d",kth_largest(num,n,3));
	printf("\nThe fifth minimum no is: %d",kth_largest(num,n,n-4));
	if(n%2==0)
	printf("\nThe middle element is: %d",kth_largest(num,n,n/2));
	else
	printf("\nThe middle element is: %d",kth_largest(num,n,(n/2+1)));
	return 0;
}
