#include <stdio.h>

void collectVector(int vector[], int N)
{
    int i;
	
    printf("enter %d elements \n", N);
    for (i = 0; i < N; i++)
	{
        printf("element %d: ", i + 1);
        scanf("%d", &vector[i]);
    }
}

int sumVector(int sum[], int vector1[], int vector2[], int N)
{
	int i;
	for(i = 0; i < N; i++)
		sum[i] = vector1[i] + vector2[i];
}

int main()
{
    int i, N;
    printf("enter the length of the lists: ");
    scanf("%d", &N);
	
    int vector1[N], vector2[N], sum[N];
	
    printf("\nfor 1st vector ");
    collectVector(vector1, N);
	
    printf("\nfor 2nd vector ");
    collectVector(vector2, N);
	
    //print the collected vectors for verification
    printf("\ncollected vectors\n");
    printf("vector 1: ");
    for (i = 0; i < N; i++)
    	printf("%d ", vector1[i]);
	
    printf("\nvector 2: ");
    for (i = 0; i < N; i++)
        printf("%d ", vector2[i]);
    
    sumVector(sum, vector1, vector2, N);
    printf("\n\nsum of vector 1 and vector 2: ");
    
    for(i = 0; i < N; i++)
    	printf("%d ", sum[i]);
    
    return 0;
}
