#include <stdio.h>
#include <stdlib.h>

int main()
{
	while (1)
	{
		int num1, num2, i;
		unsigned long long fact_n1 = 1, fact_n2 = 1, fact_n1_n2 = 1, result;
		
		printf("enter the first number (0 to exit): ");
		scanf("%d", &num1);
		
		if (num1 == 0) break;
		else if (num1 > 0); //supress anything other than a positive number that can be entered
		else
		{
			printf("you must enter a positive number: ");
			scanf("%d", &num1);
		}
		
		printf("enter the second number (0 to exit): ");
		scanf("%d", &num2);
		
		if (num2 == 0) break;
		else if (num2 > 0); //supress anything other than a positive number that can be entered
		else
		{
			printf("you must enter a positive number: ");
			scanf("%d", &num2);
		}
		
		for (i = 1; i <= num1; i++) fact_n1 *= i;
		for (i = 1; i <= num2; i++) fact_n2 *= i;
		for (i = 1; i <= abs(num1-num2); i++) fact_n1_n2 *= i;
		
		result = fact_n1 / (fact_n2 * fact_n1_n2);
		printf("Combination of %d and %d is %llu\n", num1, num2, result);
	}
	
	return 0;
}
