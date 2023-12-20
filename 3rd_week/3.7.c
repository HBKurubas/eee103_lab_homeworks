#include <stdio.h>

int main()
{
	int num, i, j, k;
	
	printf("Number of lines: ");
	scanf("%d", &num);
	
	if (num % 2 == 0)
	{
		printf("B output\n\n");
		for (i = 1; i <= num; i++)
		{
			for (j = 1; j <= num - i; j++)
				printf(" ");
			for (k = 1; k <= i; k++)
				printf("%d", k);
			printf("%d", k-1);
			for (k = i - 1; k >= 1; k--)
				printf("%d", k);
			printf("\n");
		}
	}
	
	else
	{
		printf("A output\n\n");
		for (i = 1; i <= num; i++)
		{
			for (j = 1; j <= num - i; j++)
				printf(" ");
			for (k = 1; k <= i; k++)
				printf("%d", k);
			for (k = i - 1; k >= 1; k--)
				printf("%d", k);
			printf("\n");
		}
	}
	return 0;
}
