#include <stdio.h>

#define SIZE 5		//define the length of one bar

int main()
{
	int matrix[SIZE][SIZE], i, j;
	
	for(j = 0; j < SIZE; j++)
	{
		for(i = 0; i < SIZE; i++)
		{
			if(i == j || i + j == SIZE - 1)
				matrix[i][j] = 1;
				
			else
				matrix[i][j] = 0;
		}
	}
	
	for(j = 0; j < SIZE; j++)
	{
		for(i = 0; i < SIZE; i++)
		{
			if(matrix[i][j] == 1)
				printf(" 1 ");
			else
				printf("   ");
		}
		printf("\n");
	}
	
	return 0;
}
