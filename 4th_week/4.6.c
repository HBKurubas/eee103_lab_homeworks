#include <stdio.h>

int summation(int start, int end)
{
    int sum = 0, i;

    for (i = start + 1; i < end; i++)
        if (i % 2 != 0)
            sum += i;

    return sum;
}

int main()
{
    int num1, num2;

    printf("enter the first integer: ");
    scanf("%d", &num1);

    printf("enter the second integer: ");
    scanf("%d", &num2);
    
    if (num1 > num2)
	{
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    printf("sum of odd numbers between %d and %d is: %d", num1, num2, summation(num1, num2));

    return 0;
}
