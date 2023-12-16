#include <stdio.h>

float average(float list[], int length)
{
    int i;
    float sum = 0;
    
    for (i = 0; i < length; i++)
        sum += list[i];
    
    return sum / length;
}

int main()
{
    int length, i;
	
    printf("enter the length of the list: ");
    scanf("%d", &length);
	
    float list[length];
	
    for (i = 0; i < length; i++)
    {
        printf("enter the value of index number %d of the list: ", i);
        scanf("%f", &list[i]);
    }
    
    printf("\nthe values you have entered: ");
    for (i = 0; i < length; i++)
    	printf("%.2f ", list[i]);
    
    printf("\nthe average of values you have entered: %f", average(list, length));
	
    return 0;
}

