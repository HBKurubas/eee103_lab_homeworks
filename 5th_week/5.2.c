#include <stdio.h>

int main()
{
    int l, i, array[l];
    printf("enter the number of indexes of the array: ");
    scanf("%d", &l);
    printf("enter the elements of array: \n");
    
    for (i = 0; i < l; i++)
	{
        printf("index %d: ", i);
        scanf("%d", &array[i]);
    }

    if (l >= 3 && l % 2 == 1)
	{
        int mid = l / 2;
        int sum = array[mid - 1] + array[mid] + array[mid + 1];
        printf("sum of three elements in the middle: %d\n", sum);
    }
	
	else
        printf("longitud de matriz no valida");
    
    return 0;
}
