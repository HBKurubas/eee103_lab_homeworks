#include <stdio.h>

void collectVector(int vector[], int N)
{
    int i;
	
    printf("enter %d elements: \n", N);
    for (i = 0; i < N; i++)
	{
        printf("element %d: ", i + 1);
        scanf("%d", &vector[i]);
    }
}

int main()
{
    int i, N;
    printf("enter the length of the lists: ");
    scanf("%d", &N);
	
    int vector1[N], vector2[N];
	
    printf("\nfor 1st vector ");
    collectVector(vector1, N);
	
    printf("\nfor 2nd vector ");
    collectVector(vector2, N);
	
    //print the collected vectors for verification
    printf("\nCollected Vectors\n");
    printf("vector 1: ");
    for (i = 0; i < N; i++)
        printf("%d ", vector1[i]);
	
    printf("\nvector 2: ");
    for (i = 0; i < N; i++)
        printf("%d ", vector2[i]);
	
    return 0;
}
