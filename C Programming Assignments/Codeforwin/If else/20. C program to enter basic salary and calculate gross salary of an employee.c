#include <stdio.h>

int main()
{
    float salary,da,hra;
    
    printf("Input basic salary of an employee: ");
    scanf("%f",&salary);
    
    if(salary <= 10000)
    {
        da  = salary * 0.8;
        hra = salary * 0.2;
    }
    else if(salary <= 20000)
    {
        da  = salary * 0.9;
        hra = salary * 0.25;

    }
    else
    {
         da  = salary * 0.95;
        hra =  salary * 0.3;
    }
    printf("Gross salary = %.2f",salary+hra+da);
    return 0;
}
