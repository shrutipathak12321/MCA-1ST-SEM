//GCD using euclidian algorithm and factorization method

#include<stdio.h>
#include<math.h>
int gcd,a[20],c=0;
void euclid_algorithm_gcd(int m,int n)
{
	int r;
	printf("\nGCD by euclid algorithm: ");
	printf("\nRemainder list: ");
	while(n>0)
	{
		r=m%n;
		printf("%d ",r);
		m=n;
		n=r;
	}
	gcd=m;
	printf("\nGCD is: %d",gcd);
	
}
void primeFactors(int n) 
{ 
	int i,j=0;
     
    for (i=2; i<=n; i++) 
    { 
        while (n%i == 0) 
        { 
            a[j]=i; 
            n = n/i; 
            j++;
        } 
    } 
    printf("\nFactors: ");
    for(i=0;i<j;i++)
    {
    	printf("%d ",a[i]);
    	c++;
	}
     
}
void factorization_method_gcd(int m,int n)
 {
 	int i,j=0,g=1;
 	printf("\n\nGCD by factorization method: ");
	primeFactors(gcd);
	for(i=0;i<=c;i++)
	{
		if(m!=0 && n!=0 && a[i]!=0)
		{
			printf("\n%d | %d , %d | ",a[i],m,n);
			m=m/a[i];
			n=n/a[i];
			g=g*a[i];
		}
		
	}
	printf("\n    %d ,  %d  ",m,n);

	printf("\n\nGCD is: %d",g);
	
 }
int main()
{
	int m,n;
	printf("Enter two numbers: ");
	scanf("%d %d",&m,&n);
	if(m==0 && n==0)
	{
		printf("\nGCD is: Infinity");
		return 1;
	}
	else if(m==0)
	{
		printf("\nGCD is: %d",n);
		return 1;
		
	}
	else if(n==0)
	{
		printf("\nGCD is: %d",m);
		return 1;
	}	
	euclid_algorithm_gcd(m,n);
	factorization_method_gcd(m,n);
	return 0;
}
