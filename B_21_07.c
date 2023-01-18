// string functions menu driven program

#include<stdio.h>
#include<stdlib.h>
int Strlen(char *s)
{
	int n;
	for(n=0;*s!='\0';++s)
	{
		++n;
	}
	return n;
}
void Strcpy(char *s1,char *s2)
{
	while(*s2)
	{
		*s1=*s2;
		*s1++;
		*s2++;
	}

}
void Strcat(char *s1,char *s2)
{
	while(*s1)
	{
		*s1++;
	}
	while(*s2)
	{
		*s1=*s2;
		*s1++;
		*s2++;
	}
}
void Strrev(char *s)
{
	int i,n;
	char t;
	n=Strlen(s);
	for(i=0;i<n/2;i++)
	{
		t=*(s+i);
		*(s+i)=*(s+n-1-i);
		*(s+n-1-i)=t;
	}
	
}
int Strcmp(char *s1,char *s2)
{
	int f=0,i=0;
	while(*s1 && *s2)
	{
		if(*s1!=*s2)
		{
			f=1;
			break;
		}
		s1++;
		s2++;
		if(f==0)
		return 0;
		else
		return 1;
	}
}
int main()
{
	int c;
	char s1[100],s2[100];
	printf("1.Strlen() \n2.Strcpy() \n3.Strcat() \n4.Strrev() \n5.Strcmp() \n6.Exit \nEnter any choice: ");
	scanf("%d",&c);
	
	switch(c)
	{
		case 1:
		printf("\nEnter a string: ");
		scanf("%s",s1);
		int n=Strlen(s1);
		printf("\nThe length of the string is: %d",n);
		break;
		
		case 2:
		printf("\nEnter a string: ");
		scanf("%s",s1);
		printf("\nEnter the string you want to copy: ");
		scanf("%s",s2);
		Strcpy(s1,s2);
		printf("\nAfter coping, The string is: %s",s1);
		break;
		
		case 3:
		printf("\nEnter a string: ");
		scanf("%s",s1);
		printf("\nEnter the string you want to concatinate: ");
		scanf("%s",s2);
		Strcat(s1,s2);
		printf("\nAfter concatinate, The string is: %s",s1);
		break;
		
		case 4:
		printf("\nEnter a string: ");
		scanf("%s",s1);
		Strrev(s1);
		printf("\nThe reverse string is: %s",s1);
		break;
		
		case 5:
		printf("\nEnter a string: ");
		scanf("%s",s1);
		printf("\nEnter the string you want to compare with: ");
		scanf("%s",s2);
		int c=Strcmp(s1,s2);
		if(c==0)
		printf("\nStrings are same");
		else
		printf("\nStrings are not same");
		break;	
		
		case 6:exit(0);		
	}
	return 0;
}
