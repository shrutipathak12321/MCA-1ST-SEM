//log(1+x)=x-x^2/2+x^3/3-x^4/4............

#include<stdio.h>
#include<math.h>
int main()
{
	int i;
	float n=10000,x,sum=0.0;
	printf("Enter value of x: ");
	scanf("%f",&x);
	for(i=1;i<=n;i++)
	{
		/*if(i%2==0)
			sum=sum-(pow(x,i))/i;
		else
			sum=sum+(pow(x,i))/i;*/		
		sum=sum+(pow(-1,(i+1))*pow(x,i)/i);
				
	}
	printf("Log(1+x)= %f",sum);
	return 0;	
}
