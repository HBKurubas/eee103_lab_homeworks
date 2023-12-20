#include <stdio.h>

int main()
{
	int n = 10, first = 0, second = 1, next, sum = 0;
	
	printf("the first %d elements of the fibonacci series\n", n);
	printf("%d, %d", first, second);
	sum = first + second;
	
	for (int i = 2; i < n; i++)
	{
		next = first + second;
		printf(", %d", next);
		sum += next;
		first = second;
		second = next;
	}
	printf("\nthe sum of the first %d elements of the fibonacci series is: %d\n", n, sum);
	
	return 0;
}
