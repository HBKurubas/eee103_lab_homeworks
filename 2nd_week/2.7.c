#include <stdio.h>

int main()
{
	int number, digit;
	
	printf("enter a 4-digit number: ");
	scanf("%d", &number);
	
	digit = number / 1000;
	printf("%d ", digit);
	
	digit = (number % 1000) / 100;
	printf("%d ", digit);
	
	digit = (number % 100) / 10;
	printf("%d ", digit);
	
	digit = number % 10;
	printf("%d\n", digit);
	
	return 0;
}
