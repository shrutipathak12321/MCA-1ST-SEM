#include <stdio.h>
#include <stdlib.h>


int main()
{
	char ch;
	int row = 0,col = 0, t = 0, sum = 0;
	FILE *fp1,*fp2;
	fp1 = fopen("binary_matrix.txt", "r");
	fp2 = fopen("matrix_output.txt", "w");


	while ((ch = fgetc(fp1)) != EOF) 
	{
		if (ch != ' ' && ch != '\n') 
		{
			sum += ch - 48;
			t++;
		}
		if (ch == '\n') 
		{
			fprintf(fp2, "Row[%d]: %d\n", row, sum);
			row++;
			col = t;
			t = 0;
			sum = 0;
		}

	}
	fprintf(fp2, "Dimension: %dx%d\n", row, col);

	return 0;
}
