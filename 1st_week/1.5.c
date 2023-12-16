#include <stdio.h>
#include <math.h>

int main()
{
	float midTerm1, midTerm2, final1, final2;
	
	printf("the midterm grade of course 1: ");
	scanf("%f", &midTerm1);
	printf("the final grade of course 1: ");
	scanf("%f", &final1);
	printf("the midterm grade of course 2: ");
	scanf("%f", &midTerm2);
	printf("the final grade of course 2: ");
	scanf("%f", &final2);
	
	printf("\nThe GPA of the two courses: %.2f", (midTerm1 + midTerm2 + final1 + final2) / 4);
	return 0;
} 
