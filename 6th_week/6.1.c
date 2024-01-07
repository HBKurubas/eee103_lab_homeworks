#include <stdio.h>

int function(int x, int *y, int *z)
{
	//multiply x by *y (x = 2, a is not affected)
	x*=(*y);
	
	//update *y with the result of *y squared, multiplied by x, plus *z (y = b = 2*2*2+3 = 11)
	(*y)=(*y)*(*y)*x+(*z);
	
	//update *z with the sum of *y and x, minus *z (z = c = 11+2-3 = 10)
	(*z)=(*y)+x-(*z);
}

int main()
{
	int a = 1, b = 2, c = 3;
	
	function(a, &b, &c);
	printf("a=%d b=%d c=%d", a, b, c);	//a=1 b=11 c=10
	
	return 0;
}
