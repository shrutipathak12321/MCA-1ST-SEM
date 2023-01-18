// random partition()
#include<stdio.h>
void swap(int *a,int *b)
{
	int t=*a;
	*a=*b;
	*b=t;
}
void random_partition(int *a,int n)
{
	int i,j=0,x,p,ans[n];
	x=rand()%n;
	p=a[x];
	printf("\nLet pivot=%d\n",p);
	for(i=0;i<n;i++)
	{
		if(a[i]<p)
		ans[j++]=a[i];
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==p)
		ans[j++]=a[i];
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>p)
		ans[j++]=a[i];
	}
	printf("\nAfter random partition and sort the array is: ");
	for(i=0;i<n;i++)
	printf("%d ",ans[i]);
	
	
}
int main()
{
	int n,i;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter element %d: ",i+1);
		scanf("%d",&a[i]);
	}
	random_partition(a,n);
	return 0;
}
