#include <stdio.h>

#define MAX_SIZE 100

void swap(int *first, int *second)
{
	int temp = *first;
	*first = *second;
	*second = temp;
}

void function(int array[], int n, int *min, int *max, float *mean)
{
	int i, j;
	
	//bubble sort algorithm
	for(i = 0; i < n - 1; i++)
		for(j = 0; j < n - i - 1; j++)
			if(array[j] > array[j + 1])
				swap(&array[j], &array[j + 1]);
	
	for(i = 0; i < n; i++)
		*mean += array[i];
	
	*mean /= n;
	*min = array[0];
	*max = array[n - 1];
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
	
	function(array, n, &min, &max, &mean);
	
	printf("\nmean of the numbers entered: %.3f\n", mean);
	printf("smallest one of the numbers entered: %d\n", min);
	printf("largest one of the numbers entered: %d\n", max);
	
	return 0;
}
