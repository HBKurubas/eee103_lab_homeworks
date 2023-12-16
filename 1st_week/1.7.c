#include <stdio.h>
#include <math.h>

int main()
{
	float a, b;
	
	printf("enter the 1st number: ");
	scanf("%f", &a);
	
	printf("enter the 2nd number: ");
	scanf("%f", &b);
	
	printf("the arithmetic mean is: %.0f\n", (a + b) / 2);
	printf("the geometric mean is: %.0f", sqrt(a * b));
	
	return 0;
}
