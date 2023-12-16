#include <stdio.h>

void print_asterisks(int num)
{
	int i;
	for (i = 0; i < num; i++)
		printf("*");
    printf("\n");
}

int main()
{
	int l, i;
    printf("enter the number of lines: ");
    scanf("%d", &l);
    
    int array[l];
    printf("\nenter the number of asterisks for each line\n");
    
    for (i = 0; i < l; i++)
	{
        printf("line %d: ", i+1);
        scanf("%d", &array[i]);
    }
    
    printf("\n\n%-10s%-10s%-10s\n", "Element", "Value", "Histogram");
    
    for (i = 0; i < l; i++)
    {
    	printf("%7d%8d     ", i, array[i]);
    	print_asterisks(array[i]);
	}
	
    return 0;
}
