// reverse string using both recursive and non-recursive function

#include<stdio.h>
#include<string.h>
void recursive_reverse(char *s)
{
	if(*s)
	{
		recursive_reverse(s+1);
		printf("%c",*s);
	}
}
void non_recursive_reverse(char *s)
{
	int i,n;
	char t;
	n=strlen(s);
	for(i=0;i<n/2;i++)
	{
		t=*(s+i);
		*(s+i)=*(s+n-1-i);
		*(s+n-1-i)=t;
	}
	
} 
int main()
{
	char s[100];
	printf("Enter a string: ");
	scanf("%[^\n]s",s);
	printf("\nUsing Recursive function: ");
	printf("\nReverse: ");
	recursive_reverse(s);
	printf("\nUsing Non Recursive function: ");
	non_recursive_reverse(s);
	printf("\nReverse: %s",s);
	
}
