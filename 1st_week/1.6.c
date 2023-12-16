#include <stdio.h>
#include <math.h>

int main()
{
	float radius;
	
	printf("enter the radius of the circle: ");
	scanf("%f", &radius);
	printf("the area of the circle is: %.2f\n", M_PI * radius * radius);
	printf("the perimeter of the circle is: %.2f", 2 * M_PI * radius);
	
	return 0;
} 
