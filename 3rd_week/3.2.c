#include <stdio.h>

int main()
{
	int num1, num2, i, sum = 0;
	
	printf("enter the first number: ");
	scanf("%d", &num1);
	printf("enter the second number: ");
	scanf("%d", &num2);
	
	if (num1 > num2) //swapping them if the first number greater than second number
	{
		int temp = num1;
		num1 = num2;
		num2 = temp;
	}
	
	for (i = num1; i <= num2; i++)
		if (i % 5 == 0)
			sum += i;
	
	printf("the sum of the numbers divisible by 5 between %d and %d is: %d\n", num1, num2, sum);
	return 0;
}
