#include <stdio.h>

#define MAX_SIZE 100

void matrixAddition(int rows, int cols, int matrix1[rows][cols], int matrix2[rows][cols], int sum[rows][cols])
{
	int i, j;
	
	for(i = 0; i < rows; i++)
		for(j = 0; j < cols; j++)
			sum[i][j] = matrix1[i][j] + matrix2[i][j];
}

void matrixSubstraction(int rows, int cols, int matrix1[rows][cols], int matrix2[rows][cols], int diff[rows][cols])
{
	int i, j;
	
	for(i = 0; i < rows; i++)
		for(j = 0; j < cols; j++)
			diff[i][j] = matrix1[i][j] - matrix2[i][j];
}

void printMatrix(int rows, int cols, int matrix[rows][cols])
{
	int i, j;
	
	for(i = 0; i < rows; i++)
	{
		for(j = 0; j < cols; j++)
			printf("%3d", matrix[i][j]);
		printf("\n");
	}
}

int main()
{
	int i, j, rows, cols;
	
	printf("enter the number of rows of two matrices: ");
	scanf("%d", &rows);
	printf("enter the number of columns of two matrices: ");
	scanf("%d", &cols);
	
	int matrix1[rows][cols], matrix2[rows][cols], sum[rows][cols], diff[rows][cols];
	
	printf("\nfor the first matrix");
	printf("\n--------------------\n");
	for(i = 0; i < rows; i++)
		for(j = 0; j < cols; j++)
		{
			printf("enter the element of row number %d and the column number %d: ", i + 1, j + 1);
			scanf("%d", &matrix1[i][j]);
		}
	
	printf("\nfor the second matrix");
	printf("\n---------------------\n");
	for(i = 0; i < rows; i++)
		for(j = 0; j < cols; j++)
		{
			printf("enter the element of row number %d and the column number %d: ", i + 1, j + 1);
			scanf("%d", &matrix2[i][j]);
		}
	
	matrixAddition(rows, cols, matrix1, matrix2, sum);
	printf("\nResult of Addition\n");
	printf("------------------\n");
	printMatrix(rows, cols, sum);
	
	matrixSubstraction(rows, cols, matrix1, matrix2, diff);
	printf("\nResult of Substraction\n");
	printf("----------------------\n");
	printMatrix(rows, cols, diff);
	
	return 0;
}
