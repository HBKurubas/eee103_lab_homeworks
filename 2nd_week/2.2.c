#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c, disc;
	printf("enter the coefficient of x^2: ");
	scanf("%f", &a);
	printf("enter the coefficient of x^1: ");
	scanf("%f", &b);
	printf("enter the coefficient of x^0: ");
	scanf("%f", &c);
	disc = (b*b)-(4.0*a*c);
	//printf("disc: %f\n", disc);
	
	if (disc>=0)
		printf("x1 = %f \nx2 = %f", (-b + sqrt(disc))/2*a, (-b - sqrt(disc))/2*a);
	
	else
		printf("discriminant < 0, so there is no real root");
	
	return 0;
}
