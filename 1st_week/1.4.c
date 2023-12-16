#include <stdio.h>
#include <math.h>

int main()
{
	float price;
	
	printf("what is the tax free price: ");
	scanf("%f", &price);
	
	printf("1st label price (8%% tax): %f\n", price * 1.08);
	printf("2nd label price (18%% tax): %f", price * 1.18);
	
	return 0;
}
