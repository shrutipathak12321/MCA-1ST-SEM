//Union of two sorted list so that the resultant list remains sorted

#include<stdio.h>
int main()
{
	int i,n,j,k,m,loop;
	int a[20],b[20],c[40]={0};
	
	printf("No of elements in array 1: ");
	scanf("%d",&m);
	printf("\nEnter numbers for array 1: ");
	for(i=0;i<m;i++)
	scanf("%d",&a[i]);
	
	printf("\nNo of elements in array 2: ");
	scanf("%d",&n);
	printf("\nEnter numbers for array 2: ");
	for(i=0;i<n;i++)
	scanf("%d",&b[i]);
	
	
	if(n>=m)
	loop=m;
	else
	loop=n;
	
	i=0;
	j=0;
	k=0;
	while(i<loop||j<loop)
	{
		if(a[i]>b[j])
		{
			c[k]=b[j];
			j++;
			k++;
		}
		else
		{
			c[k]=a[i];
			i++;
			k++;
		}
	}
	
	
	if(m>=n)
	{
		while(i<m)
		{
			c[k]=a[i];
			k++;
			i++;
		}	
	}
	else
	{
		while(j<n)
		{
			c[k]=b[j];
			k++;
			j++;
		}
	}
	printf("\nThe Merged array: ");
	for(i=0;i<m+n;i++)
	printf("%d ",c[i]);
	
	return 0;

}
