#include <stdio.h>
#include <math.h>

int main()
{
	int n, x, i;
	double e = 1.0, ex = 1.0;
	long long unsigned int fac = 1;

	printf("set a boundary: ");
	scanf("%d", &n);
	printf("set the power of e: ");
	scanf("%d", &x);
	
	if(n >= 0 && n < 66) //if n > 65, the capacity of the variable type is not enough
	{
		for (i = 1; i <= n; i++)
		{
			fac*=i;
			e+=1.0/fac;
			ex+=pow(x, i)/fac;
		}
		printf("a) e = ~%.3lf\n", e); //it is more correct to print as 2.718
		printf("b) e^x = ~%lf\n", ex); //here, it is not accurate enough
		printf("b') e^x = %lf\n", pow(e, x)); // here, it is much more accurate
	}
	
	else
	{
		printf("limite no valido");
		return 1;
	}
	
	return 0;
}
