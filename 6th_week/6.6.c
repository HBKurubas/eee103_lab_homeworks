#include <stdio.h>

#define MAX_SIZE 100

void swap(int *first, int *second)
{
	int temp = *first;
	*first = *second;
	*second = temp;
}

void sort(int array[], int n)
{
	int i, j;
	
	//bubble sort algorithm
	for(i = 0; i < n - 1; i++)
		for(j = 0; j < n - i - 1; j++)
			if(array[j] > array[j + 1])
				swap(&array[j], &array[j + 1]);
}

int main()
{
	int n, i, min, max;
	float mean = 0;
	
	printf("enter the length of the array: ");
	scanf("%d", &n);
	
	if (n > MAX_SIZE)
	{
		printf("invalid array size\nplease enter a positive integer less then or equal to %d", MAX_SIZE);
		return 1;
	}
	
	int array[n];
	
	for(i = 0; i < n; i++)
	{
		printf("enter the index %d: ", i);
		scanf("%d", &array[i]);
	}
	
	sort(array, n);
	
	printf("\narray sorted from smallest to largest ordered of array: ");
	for(i = 0; i < n; i++)
		printf("%d ", array[i]);
	
	return 0;
}
