#include <stdio.h>

int findMax(int array[], int l)
{
    int i, max = array[0];
    
    for (i = 1; i < l; i++)
	{
        if (array[i] > max)
            max = array[i];
    }
    return max;
}

int findMin(int array[], int l)
{
    int i, min = array[0];
    
    for (i = 1; i < l; i++)
	{
        if (array[i] < min)
            min = array[i];
    }
    return min;
}

int main()
{
    int n, i;
    
    printf("enter the size of the array: ");
    scanf("%d", &n);
    
    int array[n];
    
    printf("\nenter %d elements for the array\n", n);
    for (i = 0; i < n; i++)
	{
        printf("element %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    
    int largest = findMax(array, n);
    int smallest = findMin(array, n);
    
    printf("\nlargest element: %d\n", largest);
    printf("smallest element: %d\n", smallest);
    
    return 0;
}
