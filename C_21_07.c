#include<stdio.h>
#include<string.h>
int main()
{
	FILE  *fp1,*fp2;
	char ch;
	fp1=fopen("file1.txt","r");
	if(fp1==NULL)
	{
		printf("File does not exist..");
		return 1;
	}
	fp2=fopen("file2.txt","w");
	if(fp2==NULL)
	{
		printf("File does not exist..");
		fclose(fp1);
		return 1;
	}	
	while((ch=fgetc(fp1))!=EOF)
	{
		ch=toupper(ch);
		fputc(ch,fp2);
	}
	printf("File successfully copied in uppercase letter..");\
	fclose(fp1);
	fclose(fp2);
	return 0;
}
