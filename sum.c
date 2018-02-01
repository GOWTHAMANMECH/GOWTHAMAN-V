#include <stdio.h>
void main()
{
    int g, i, sum = 0;
    do
    {
        printf("Enter a positive integer: ");
        scanf("%d",&g);
    }
    while (g <= 0);
 for(i=1; i <= g; ++i)
    {
        sum += i;   
    }
 printf("Sum = %d",sum);
 return 0;
}

