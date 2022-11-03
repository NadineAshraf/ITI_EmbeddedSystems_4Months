#include <stdio.h>
#define INT_BITS sizeof(int)*8-1
int rotateRight(int num, int rotations)
{
    int Dropped_LSB;
    /* The effective rotation */
    rotations %= INT_BITS;
    /* Loop till rotation becomes 0 */
    while(rotations--)
    {
        /*Get LSB of num before it gets dropped */
        Dropped_LSB = num & 1;  
        /* Right shift by 1 and
           clear its MSB */
        num = (num >> 1) & (~(1 << INT_BITS));
        /* Set its dropped LSB as new MSB */
        num = num | (Dropped_LSB << INT_BITS);
        
    }
    return num;
    
}
int rotateLeft(int num,int rotations)
{
    int Dropped_MSB;
    /* The effective rotation*/
    rotations %= INT_BITS;
    /* loop till rotation becomes 0*/
    while(rotations--)
    {
        /* Get MSB of num before it gets dropped */
        Dropped_MSB = (num >> INT_BITS) & 1;
        /* Left rotate num by 1 and
           set its dropped MSB as new LSB */
        num = (num << 1) | Dropped_MSB;
    }
    return num;
}
int main()
{
   int num,i,rotations;
   printf("Input number = ");
   scanf("%d",&num);
   printf("Number of rotations = ");
   scanf("%d",&rotations);
 
  
   printf("%d left rotated %d times = %d\n",num,rotations, rotateLeft(num,rotations));
   printf("%d right rotated %d times = %d",num,rotations, rotateRight(num, rotations));
   
   
    return 0;
}
