#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c;
    float root1,root2,discriminant,Imaginary;
    printf("Input a: ");
    scanf("%f",&a);
    printf("Input b: ");
    scanf("%f",&b);
    printf("Input c: ");
    scanf("%f",&c);
    discriminant = (b*b)-(4*a*c);
    if(discriminant>0)
    {
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("Root1: %.2f\nRoot2: %.2f", root1, root2);
    }
    else if(discriminant == 0)
    {
        root1 = root2 = -b / (2 * a);
        printf("Root1: %.2f\nRoot2: %.2f", root1, root2);
    }
    else if(discriminant<0)
    {
       root1 = root2 = -b / (2 * a);
        Imaginary = sqrt(-discriminant) / (2 * a);
        printf("Two distinct complex roots exists: %.2f + i%.2f and %.2f - i%.2f", 
                root1, Imaginary, root2, Imaginary);
        
    }
    return 0;
}
