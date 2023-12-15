#include <stdio.h>
#include <math.h>

long long factorial(int n)
{
	int i;
    long long fact = 1;
    for (i = 1; i <= n; i++)
		fact *= i;
    return fact;
}

double my_sin(double x)
{
	double sum = 0;
	int n, terms = 11;
	
	for(n = 0; n <= (terms-1)/2; n++)
		sum += pow(-1, n) * pow(x, 2*n+1) / factorial(2*n+1);
	
	return sum;
}

double my_cos(double x)
{
	double sum = 0;
	int n, terms = 12;
	
	for(n = 0; n <= terms/2; n++)
		sum += pow(-1, n) * pow(x, 2*n) / factorial(2*n);
	
	return sum;
}

int main()
{
	double x;
	
	printf("enter the angle x that is wanted to solve sin(x) and cos(x) functions as degree: ");
	scanf("%lf", &x);
	
	x = fmod(x, 360);				// main measuring
	if(x<0)	x*=-1;					// main measuring
	double radianX = x*M_PI/180.0;	//degree to radian
	
    printf("sin(%.2lf) = %.5lf\n", x, my_sin(radianX));
    printf("cos(%.2lf) = %.5lf\n", x, my_cos(radianX));
    
    return 0;
}
