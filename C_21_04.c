//compare two given dates
#include<stdio.h>
struct date
{
	int d,m,y;
};
int main()
{
	struct date date1,date2;
	printf("Enter the first date: ");
	scanf("%d /%d /%d",&date1.d,&date1.m,&date1.y);
	printf("Enter the second date: ");
	scanf("%d /%d /%d",&date2.d,&date2.m,&date2.y);
	if(date1.d==date2.d && date1.m==date2.m && date1.y==date2.y)
	{
		printf("\nThe dates are equal.");
	}
	else
		printf("\nThe dates are not equal.");
	return 0;

}
