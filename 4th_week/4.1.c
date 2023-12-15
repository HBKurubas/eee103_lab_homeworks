#include <stdio.h>

double findArea(double a, double b)
{
	return a*b;
}

void main()
{
	while (1)
	{
		double a, b;
		printf("enter the lengths of the two perpendicular sides of the rectangle\n");
		scanf("%lf %lf", &a, &b);
		if(a==0 || b==0) break;
		printf("area of the rectangle with the entered dimensions: %.3lf\n\n", findArea(a, b));
		findArea(a, b);
	}
}
