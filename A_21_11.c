//generate the n-th fibonacci number

#include<stdio.h>
#include<math.h>

int main()
{
	int n,i,a=0,b=1,c;
	double f,p,m,t1,t2,d;
	
	printf("Enter the value of n: ");
	scanf("%d",&n);
	
	printf("Actual output: ");
	if(n==2){
		printf(" 1");
	}
	else if(n==1){
		printf("0");
	}
	else{
		for(i=2;i<=n;i++)
		{
			c=a+b;
			a=b;
			b=c;	
		}
		
		printf("%d ",c);
	}
	
	
	t1=(1+sqrt(5))/2;
	t2=(1-sqrt(5))/2;
	
	p= pow(t1,n)/sqrt(5);
	m= pow(t2,n)/sqrt(5);
	
	f=p-m;
	
	printf("\nFormal output: %.0f",f);
	
	d=c-f;
	printf("\nDifference: %f",d);
	
	
	return 0;
}
