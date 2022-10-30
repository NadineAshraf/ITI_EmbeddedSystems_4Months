#include <stdio.h>

int main()
{
    float phy,chem,bio,math,comp;
    float percentage;
    printf("Input marks of five subjects: ");
    scanf("%f %f %f %f %f",&phy,&chem,&bio,&math,&comp);
    percentage = (phy+chem+bio+math+comp)/5.0;
    if(percentage>=90)
    {
        printf("percentage = %.2f\n",percentage);
        printf("Grade A");
    }
    else if(percentage>=80)
    {
        printf("percentage = %.2f\n",percentage);
        printf("Grade B");
    }
    else if(percentage>=70)
    {
        printf("percentage = %.2f\n",percentage);
        printf("Grade C");
    }
    else if(percentage>=60)
    {
        printf("percentage = %.2f\n",percentage);
        printf("Grade D");
    }
    else if(percentage>=40)
    {
        printf("percentage = %.2f\n",percentage);
        printf("Grade E");
    }
    else 
    {
        printf("percentage = %.2f\n",percentage);
        printf("Grade F");
    }
    return 0;
}
