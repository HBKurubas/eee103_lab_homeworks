#include <stdio.h>

float calculatePayment(float time)
{
    if (time <= 3)	return 2;
    else
	{
        float fee = 2+(int)(time-3)*0.5;
		        
		if (fee <= 10)	return fee;
        else			return 10;
    }
}

int main()
{
    int i;
    float time[3], totalRevenue = 0;

    for (i = 0; i < 3; i++)
	{
        printf("enter the parking time for customer #%d: ", i+1);
        scanf("%f", &time[i]);
    }

    printf("\n\n%-10s%-15s\n", "customer", "payment");
    printf("-----------------\n");

    for (i = 0; i < 3; i++)
	{
        printf("%5d%9.2f TL\n", i+1, calculatePayment(time[i]));
        totalRevenue += calculatePayment(time[i]);
    }

    printf("\ntotal revenue: %.2f TL\n", totalRevenue);

    return 0;
}
