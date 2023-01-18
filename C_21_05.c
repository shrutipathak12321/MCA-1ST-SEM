#include<stdio.h>
#include<string.h>
typedef struct library
{
	int acn,flag;
	char title[50],author[50];
	float price;
}lib;
int main()
{
	lib l[100],t;
	int ch,i,j,index,n,c=0,min,a;
	char temp[30];
	do{
	printf("\n\n ----------MENU-------------\n");
	printf("1.Add book information\n");
	printf("2.Display book information\n");
	printf("3.List all books of given author\n");
	printf("4.List the title of specified book\n");
	printf("5.List the count of books in the library\n");
	printf("6.List the books in the order of accession number\n");
	printf("7.Exit\n");
	printf("Enter your choice: ");
	scanf("%d",&ch);
	
		switch(ch)
		{
			case 1:
				printf("Number of books you want to add: ");
				scanf("%d",&n);
				for(i=0;i<n;i++)
				{
					printf("\nEnter details of book- %d\n",i+1);
					printf("Enter accession number: ");
					scanf("%d",&l[i].acn);
					printf("Enter title of the book: ");
					scanf("%s",l[i].title);
					printf("Enter author name: ");
					scanf("%s",l[i].author);
					printf("Enter price of the book: ");
					scanf("%f",&l[i].price);
					printf("Press 1 if the book is issued and if not then press 0: ");
					scanf("%d",&l[i].flag);
				}				
				break;
			case 2:
				printf("\tDetails of all books: \n----------------------------------------------------------------------\n");
				printf("Accession No.  Title \t Author  Price \t    Issued(1) or not(0)");
				printf("\n--------------------------------------------------------------------------");
				for(i=0;i<n;i++)
				{
					printf("\n%d \t\t %s \t  %s \t %f \t %d ",l[i].acn,l[i].title,l[i].author,l[i].price,l[i].flag);
				}
				break;
			case 3:
				printf("\nEnter author name: ");
				scanf("%s",temp);
				printf("\nThe title of the books by author %s: ",temp);
				for(i=0;i<n;i++)
				{
					if(strcmp(l[i].author,temp)==0)
					{
						printf("\n%s",l[i].title);
					}
				}
				break;
			case 4:
				printf("\nEnter accession no: ");
				scanf("%d",&a);
				printf("\nThe title of the book of accession no %d is: ",a);
				for(i=0;i<n;i++)
				{
					if(l[i].acn==a)
					{
						printf("%s",l[i].title);
					}
				}
				break;
			case 5:
				for(i=0;i<n;i++)
				c++;
				printf("\nThe total no of books in the library: %d",c);
				break;
			case 6:
				for(i=0;i<n;i++)
				{
					min=l[i].acn;
					index=i;
					for(j=i;j<n;j++)
					{
						if(min>l[j].acn)
						{
							min=l[j].acn;
							index=j;
						}
					}
					if(index!=i)
					{
						strcpy(t.title,l[i].title);
						t.acn=l[i].acn;
						strcpy(l[i].title,l[index].title);
						l[i].acn=l[index].acn;
						strcpy(l[index].title,t.title);
						l[index].acn=t.acn;
						
					}
				}
				printf("\nAfter Sorting accession no the book details: ");
				printf("\n\nAccession no.  Title");
				for(i=0;i<n;i++)
				{
						printf("\n %d \t\t %s  \n",l[i].acn,l[i].title);
				}
				break;
			case 7:return 0;
		}
	}while(1);
	return 0;
}
