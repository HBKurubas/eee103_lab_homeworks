#include <stdio.h>
#include <math.h>

int main()
{
	float angle;
	
	printf("type exterior angle of a regular polygon: ");	
	scanf("%f", &angle);
	
	if (angle <= 0 || angle > 120 || fmod(360.00, angle) != 0)
	{
		printf("invalid angle, it's not a regular polygon");
		return 1;
	}
	else
		printf("the number of sides of the regular polygon whose exterior angle is %f: %.0f", angle, 360 / angle);
	
	return 0;
}
