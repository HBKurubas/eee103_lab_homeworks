#include <stdio.h>
#include <math.h>

int findRoots(float a, float b, float c, float *x1, float *x2)
{
    float discriminant = b * b - 4 * a * c;
    
    if (discriminant >= 0)
	{
        *x1 = (-b + sqrt(discriminant)) / (2 * a);
        *x2 = (-b - sqrt(discriminant)) / (2 * a);
        return 0;
    }
    
	else
		return 1;
}

int main()
{
    float a, b, c, x1, x2;
    
    printf("enter the coefficients of the 2nd degree equation: ");
    scanf("%f %f %f", &a, &b, &c);
    
    if (findRoots(a, b, c, &x1, &x2) == 0)
    {
    	printf("root 1 = %.3f\n", x1);
    	printf("root 2 = %.3f", x2);
	}
	
	else
		printf("discriminant < 0, so there is no real root");
	
    return 0;
}
