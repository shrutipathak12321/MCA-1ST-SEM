// Linked list menu driven program

#include<stdio.h>
#include<stdlib.h>
typedef struct linked_list
{
	int data;
	struct linked_list *next;
}node;
node *start=NULL,*q,*temp;

void insert(int n)
{
	temp=(node*)malloc(sizeof(node));
	temp->data=n;
	temp->next=start;
	start=temp;
	printf("\n%d inserted\n",n);
}
void deletion(int n)
{
	if(start==NULL)
	{
		printf("\n List is empty\n");
	}
	else
	{
		if(start->data==n)
		{
			temp=start;
			start=start->next;
			printf("\n Deleted item is %d\n",temp->data);
			free(temp);
		}
		else
		{
			q=start;
			temp=start->next;
			while(temp->data!=n && temp!=NULL)
			{
				q=q->next;
				temp=temp->next;
			}
			if(temp!=NULL)
			{
				q->next=temp->next;
				printf("\n Deleted item is %d\n",temp->data);
				free(temp);
			}			
			else
			{
				printf("\n Item not found\n");
			}
		}	
	}
}

void print()
{
	if(start==NULL)
    	printf("\n Lise is empty\n");
	else
	{
		q=start;
		printf("\n list is: ");
		while(q!=NULL)
		{
			printf("%d ",q->data);
			q=q->next;
		}
	}
	
}

int search(int n)
{
	int c=0;
	if(start==NULL)
	{
		printf("\n List is empty\n");
		return c;
	}
	else
	{
		q=start;
		while(q!=NULL)
		{
			c++;
			if(q->data==n)
			return c;			
			q=q->next;
		}
	}
}
int main()
{
	int c,n,k;
	do
	{
		printf("\n1.Insert a new node \n2.Delete a node \n3.Print the list \n4.Search for an element in the list \n5.Exit \nEnter any choice: ");
		scanf("%d",&c);
	
		switch(c)
		{
			case 1:
			printf("\n Enter a number: ");
			scanf("%d",&n);
			insert(n);
			break;
			
			case 2:
			printf("\n Enter the number you want to delete: ");
			scanf("%d",&n);
			deletion(n);
			break;
			
			case 3:
			print();
			break;
				
			case 4:
			printf("\n Enter the searching element: ");
			scanf("%d",&n);
			k=search(n);
			if(k>0)
			printf("\n %d is present in position- %d\n",n,k);
			else
	 		printf("\n Item not found!\n"); 
	 		break;
	 		
			case 5:
			exit(0);
			break;
		}
	}while(c!=0);
return 0;
}

