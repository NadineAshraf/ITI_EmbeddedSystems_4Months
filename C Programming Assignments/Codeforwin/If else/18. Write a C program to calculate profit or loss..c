#include <stdio.h>

int main()
{
    float cost,selling;
    printf("Input cost price: ");
    scanf("%f",&cost);
    printf("Input selling price: ");
    scanf("%f",&selling);
    if(selling>cost)
    {
        printf("Profit: %.2f",selling-cost);
    }
    else if(cost>selling)
    {
        printf("Loss: %.2f",cost-selling);
    }
    else
    {
        printf("No profit No loss");
    }
    return 0;
}
