#include <stdio.h>
#define ROWS 9
#define COLUMNS 9

int main()
{
	int rows, cols;
	int product [ROWS][COLUMNS];
	int i, j;

	printf(" ---------Multipliction Table---------\n");

	for(j=1; j<=COLUMNS; j++)
	{
		for(i=0; i<ROWS; i++)
		{
			rows= i+1;
			printf("%2d", rows);

			for(j=1; j<=COLUMNS;j++)
			{
				cols= j+1;
				product[i][j]= rows * cols;
				printf("%4d", product[i][j]);
			}
			printf("\n");
		}
	}
}
