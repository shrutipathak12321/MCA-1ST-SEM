//LCM of n integers

#include<stdio.h>
int main()
{
	int n,a[10],i,c,d,f=0;
	printf("Enter no of elements: ");
	scanf("%d",&n);
	printf("Enter %d numbers:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]==0)
		f=1;
	}
	if(f)
	printf("Cannot be calculated(undefined).");
	
	i=0;
	d=a[i];
	while(i<n)
	{
		if(a[i]>d)
			d=a[i];
		i++;
	}
	while(1)
	{
		i=0;
		c=0;
		while(i<n)
		{
			if(d%a[i]==0)
				c++;
			i++;
		}
		if(c==n)
			break;
		else
			d++;
	}
	printf("LCM = %d",d);
	
	return 0;
	
}
