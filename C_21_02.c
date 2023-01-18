//add two given time values
#include<stdio.h>
typedef struct time
{
	int h,m,s;
}time;

time add(time time1,time time2 )
{
	time sum;
	sum.h=time1.h+time2.h;
	sum.m=time1.m+time2.m;
	sum.s=time1.s+time2.s;
	if(sum.s>=60)
	{
		sum.m++;
		sum.s-=60;
	}
	if(sum.m>=60)
	{
		sum.h++;
		sum.m-=60;
	}
	return sum;
}
int main()
{
	time time1,time2,sum;
	printf("Enter the first time: ");
	scanf("%d :%d :%d",&time1.h,&time1.m,&time1.s);
	printf("Enter the second time: ");
	scanf("%d :%d :%d",&time2.h,&time2.m,&time2.s);
	sum=add(time1,time2);
	printf("\nAfter addition the time is: %d:%d:%d",sum.h,sum.m,sum.s);
	return 0;

}
