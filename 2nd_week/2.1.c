#include <stdio.h>
#include <stdlib.h>

int main()
{
	float a, b, c;
	printf("enter 3 edge lengths of a triangle \n");
	scanf("%f %f %f", &a, &b, &c);
	
	if(abs(a-b)<c && a+b>c)
	{
		if (a==b && a==c) printf("equilateral");
		else if (a==b || a==c || b==c) printf("isosceles");
		else printf("diverse");
	}
	
	else
	{
		printf("longitudes no validas");
		return 1;
	}
	return 0;
}
