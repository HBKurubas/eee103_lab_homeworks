#include <stdio.h>

int main()
{
	int number;
	printf("enter a maximum 3-digit number: ");
	scanf("%d", &number);
	
	if (number < 10)
		printf("the number has 1 digit");
	
	else if (number < 100)
		printf("the number has 2 digits");
	
	else if (number < 1000)
		printf("the number has 3 digits");
	
	else
		printf("the number is more than 3 digits");
	
	return 0;
}
