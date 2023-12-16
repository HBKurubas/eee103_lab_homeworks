#include <stdio.h>

void bubbleSort(int array[], int N)
{
    int i, j, temp;
	
    for (i = 0; i < N - 1; i++)
	{
        for (j = 0; j < N - i - 1; j++)
		{
            if (array[j] > array[j + 1])
			{
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int i, l;

    printf("enter the length of the array: ");
    scanf("%d", &l);
    
    int array[l];
    printf("\nenter %d elements for the array\n", l);
    for (i = 0; i < l; i++)
	{
        printf("element %d: ", i+1);
        scanf("%d", &array[i]);
    }
    
    bubbleSort(array, l);

    printf("\nascending ordered array\n");
    for (i = 0; i < l; i++)
        printf("%d ", array[i]);

    return 0;
}
