#include<stdio.h>
#include<string.h>
int main()
{
	FILE  *fp1,*fp2;
	char ch;
	fp1=fopen("file3.txt","r");
	if(fp1==NULL)
	{
		printf("File does not exist..");
		return 1;
	}
	fp2=fopen("file1.txt","a");
	if(fp2==NULL)
	{
		printf("File does not exist..");
		fclose(fp1);
		return 1;
	}	
	while((ch=fgetc(fp1))!=EOF)
	{
		fputc(ch,fp2);
	}
	printf("File successfully appended..");
	return 0;
}
