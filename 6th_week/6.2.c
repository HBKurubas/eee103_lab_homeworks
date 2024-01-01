#include <stdio.h>

void function(int *num1, int *num2, int *num3, int *product, int *sum)
{
	*product = (*num1) * (*num2) * (*num3);
	*sum = (*num1) * (*num1) + (*num2) * (*num2) + (*num3) * (*num3);
}

int main()
{
	int num1, num2, num3, product, sum;
	
	printf("enter 3 integers: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	
	function(&num1, &num2, &num3, &product, &sum);
	
	printf("\nproduct of these numbers: %d\n", product);
	printf("sum of the squares of these numbers: %d", sum);
	
	return 0;
}
