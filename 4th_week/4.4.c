#include <stdio.h>
#include <math.h>

int isPrime(int number)
{
	int i;
	
	for(i = 2; i <= sqrt(number); i++)
		if(number%i == 0)	return 0;
	
	return 1;
}

unsigned int sumFactors(int number)
{
	int sum = 0, i;
	
	for(i = 1; i <= number; i++)
		if(number%i == 0)	sum+=i;
		
	return sum;
}

void main()
{
	int number;
	
	while (1)
	{
		printf("enter a positive number or '0' to execute the program: ");
		scanf("%d", &number);
		
		if(number == 0)		break;
		
		if(isPrime(number) == 1)	printf("%d is a prime number\n\n", number);
		
		else	printf("the sum of factors of %d: %u\n\n", number, sumFactors(number));
	}
}
