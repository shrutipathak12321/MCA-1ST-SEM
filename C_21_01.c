//students data
#include<stdio.h>
#include<string.h> 

struct student
{
	char name[30];
	int roll;
	float marks[5];
	float avg;
	float full;
};
int main()
{
	struct student s[100],temp;
	int n,i,j,a[100],max,index;
	printf("Enter the no of students: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		s[i].roll=i+1;
		printf("\nEnter information of roll no: %d",i+1);
		printf("\nEnter name: ");
		scanf("%s",s[i].name);
		printf("\nEnter marks of 5 subjects: ");
		for(j=0;j<5;j++)
		{
			printf("\nEnter marks of subject %d: ",j+1);
			scanf("%f",&s[i].marks[j]);
			s[i].full+=s[i].marks[j];
			s[i].avg=s[i].full/5.0;
		}
	}
	for(i=0;i<n;i++)
	{
		printf("\nTotal marks of student %d: %f",i+1,s[i].full);
		printf("\nAverage marks of student %d: %f\n",i+1,s[i].avg);
		a[i]=s[i].avg;
	}
	
	for(i=0;i<n;i++)
	{
		max=s[i].avg;
		index=i;
		for(j=i;j<n;j++)
		{
			if(max<s[j].avg)
			{
				max=s[j].avg;
				index=j;
			}
		}
		if(index!=i)
		{
			strcpy(temp.name,s[i].name);
			temp.avg=s[i].avg;
			strcpy(s[i].name,s[index].name);
			s[i].avg=s[index].avg;
			strcpy(s[index].name,temp.name);
			s[index].avg=temp.avg;
			
		}
	}
	printf("\nAfter Sorting marks: ");
	for(i=0;i<n;i++)
	{
			printf("\nName: %s  average marks: %f\n",s[i].name,s[i].avg);
	}
	return 0;
}
