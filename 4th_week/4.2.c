#include <stdio.h>
#include <math.h>

double cosineTheorem(double a, double b, double C)
{
	double c = sqrt(pow(a, 2) + pow(b, 2) - 2*a*b*cos(C*M_PI/180));
	return c;
}

double LoSinesTheorem(double a, double b, double C)
{
	double c = cosineTheorem(a, b, C);
	double k = sin(C*M_PI/180)/c;
	double A = A = asin(a*k)*180/M_PI;
	return A;
}

void main()
{
	double a, b, B, C;
	printf("enter the length of two sides of a triangle and the angle (degree) made by those two sides\n");
	scanf("%lf %lf %lf", &a, &b, &C);
	B = 180-C-LoSinesTheorem(a, b, C);
	
	printf("the length of the 3rd side of the triangle: %.3lf\n", cosineTheorem(a, b, C));
	printf("other angles: %.3lf, %.3lf", LoSinesTheorem(a, b, C), B);
}
