#include <stdio.h>

#define MAX_SIZE 100

void countEven(int array[], int n, int *count)
{
	int i;
	
	for(i = 0; i < n; i++)
		if(array[i] % 2 == 0)
			*count += 1;
}

void createArray(int array[], int n, int evenArray[])
{
	int i, j = 0;
	
	for(i = 0; i < n; i++)
		if(array[i] % 2 == 0)
		{
			evenArray[j] = array[i];
			j += 1;
		}
}

int main()
{
	int n, i, count = 0;
	
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
	
	countEven(array, n, &count);
	int evenArray[count];
	
	createArray(array, n, evenArray);
	
	printf("\narray containing only even elements: ");
	for(i = 0; i < count; i++)
		printf("%d ", evenArray[i]);
	
	return 0;
}
