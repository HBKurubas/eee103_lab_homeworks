#include <stdio.h>

int main()
{
	float p1, p2, total, discounted;
	
	printf("enter the price of the first product: ");
	scanf("%f", &p1);
	printf("enter the price of the second product: ");
	scanf("%f", &p2);
	total = p1 + p2;
	
	if (total > 200)
	{
		discounted = p2 * 0.75;
		total = p1 + discounted;
		printf("the total price after a 25%% discount on the second product is: %.2f\n", total);
	}
	
	else
		printf("the total price is: %.2f\n", total);
	
	return 0;
}
