// check matrix is orthogonal or not

#include<stdio.h>
float det=1.0;
void read_data(float m[][10],int n)
{
	int i,j;
	printf("\nEnter Elements of the matrix: \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter element #a%d%d: ",i+1,j+1);
			scanf("%f",&m[i][j]);
		}
	}
}

void transpose(float m[][10],float t[][10],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			t[j][i]=m[i][j];
		}
	}
}

void multiply(float a[][10],float b[][10],float mul[][10],int n)
{
	int i,j,k;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			mul[i][j]=0;
			for(k=0;k<n;k++)
			{
				mul[i][j]+= a[i][k]*b[k][j];
			}
		}
	}
}
float determinant(float m[][10],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		det *= m[i][i];
	}
	//printf("%d",det);
	return det;
}
void display(float m[][10],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%.2f ",m[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	float m[10][10],t[10][10],mul[10][10];
	int n;
	printf("Enter order of the square matrix: ");
	scanf("%d",&n);
	read_data(m,n);
	printf("\nThe matrix is: \n");
	display(m,n);
	transpose(m,t,n);
	printf("\nThe transpose matrix is: \n");
	display(t,n);
	multiply(m,t,mul,n);
	printf("\nAfter multiplication the result is: \n");
	display(mul,n);
	det=determinant(mul,n);
	if(det>0.9 && det<1.1)
	printf("\nThe matrix is an orthogonal matrix.");
	else
	printf("\nthe matrix is not an orthogonal matrix.");
	return 0;
	
}
