#include <stdio.h>

double gpa(double midterm1, double final1, double midterm2, double final2)
{
	return midterm1*0.2 + final1*0.3 + midterm2*0.2 + final2*0.3;
}

void main()
{
	int i, j;
	double midterm[2], final[2], gpas[3];
	
	for(j=0; j<3; j++)			//student number
	{
		for(i=0; i<2; i++)		//class number
		{
			printf("enter the number %d class' midterm and final grades of student %d\n", i+1, j+1);
			scanf("%lf %lf", &midterm[i], &final[i]);
		}
		gpas[j] = gpa(midterm[0], final[0], midterm[1], final[1]);
		puts("");
	}
	
	for(i=0; i<3; i++)
	{
		printf("GPA of number %d student: %lf\n", i+1, gpas[i]);
	}
}
