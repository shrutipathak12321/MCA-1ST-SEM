// permutation of n numbers
#include<stdio.h>
void display(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	printf("\n");
}
void swap(int *a,int *b)
{
	int t=*a;
	*a=*b;
	*b=t;
}
void permutation(int *a,int start,int end)
{
	if(start==end)
	{
		display(a,end+1);
	}
	int i;
	for(i=start;i<=end;i++)
	{
		swap((a+i),(a+start));
		//fixing one first digit,and calling permutation on rest of the digit
		permutation(a,start+1,end);
		swap((a+i),(a+start));		
	}
}
int main()
{
	int n,i;
	printf("Enter value of n: ");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter elements: ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	permutation(a,0,n-1);
	return 0;
}

