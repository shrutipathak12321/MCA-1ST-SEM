//Find the reverse and check palindrome or not

#include<stdio.h>
#include<string.h>

int main()
{
	char n[100],r[100];
	int i,l,j;
	printf("Enter number: ");
	scanf("%s",&n);
	
	if(n[0]=='0')
	{
		for(i=0;i<strlen(n);i++)
		{
			n[i]=n[i+1];
		}
	}
	
	l=strlen(n);
	//printf("%d\n",l);
	j=l-1;
	for(i=0;i<l;i++)
	{
		r[i]=n[j];
		j--;
	}
	r[i]='\0';
	printf("Reverse: %s\n",r);
	if(strcmp(n,r)==0)
	printf("It is a Palindrome\n");
	else
	printf("It is NOT a Palindrome");
	
	return 0;
	
}
