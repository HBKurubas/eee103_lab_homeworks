#include <stdio.h>

int main()
{
	int n, k, i;
	float sum = 0.0;
	
	for (n = 1; n <= 50; n++) sum += 1.0/n;
		printf("a) %.3f\n\n", sum);
	
	sum = 0.0;
	
	for (k = 1; k <= 6; k++)
		for (i = 1; i <= 10; i++)
			sum += 1.0/(i+k);
	
	printf("b) %.4f", sum);
	
	return 0;
}
