#include <stdio.h>
#include <math.h>

int main()
{
	int n, temp, m, digits = 0;
	
	printf("enter an integer: ");
	scanf("%d", &n);
	
	if (n < 0)
	{
		n = -n;
		printf("it's negative\n");
	}
	
	else if (n > 0)
		printf("it's positive\n");
	
	else
	{
		printf("the number you've entered is 0 and it has 1 digit\n");
		return 1;
	}
	
	temp = n;
	
	while(temp != 0)
	{
		temp/=10;
		digits++;
	}
	
	printf("digits: %d\n", digits);
	printf("these are: ");
	m = n;
	
	while (digits > 0)
	{
		temp = m / pow(10, digits - 1);
		printf("%d ", temp);
		m %= (int)pow(10, digits - 1);
		digits--;
	}
	
	printf("\narithmetic mean of ones and hundreds place: %.1f", (float)((n % 10) + ((n / 100) % 10)) / 2);
	return 0;
} 
