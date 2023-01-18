//Celsious to Farehnheit and vice versa

#include<stdio.h>
int main()
{
	int ch,a;
	float c,f,res;
	do{
		printf("Enter any choice: \n1.Celsius to Fahrenheit \n2.Fahrenheit to celsius \n3.Exit \n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter temperature in Celsius: \n");
				scanf("%f",&c);
				res=(9*c/5)+32;
				printf("Temperature in Fahrenhiet: %f\n",res);
				break;
			
			case 2:
				printf("Enter temperature in Fahrenhiet: \n");
				scanf("%f",&f);
				res=5*(f-32)/9;
				printf("Temperature in Celsius: %f\n",res);
				break;
				
			case 3:
				exit(0);
		}
		printf("Do you want to continue? press 1 if not press 0\n ");
		scanf("%d",&a);
	}while(a!=0);
	
	return 0;
}
