#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, sum=0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    for (int i=num; i>0; i/=10)
    {
        sum+=i%10;
    }
    printf("Sum of digits: %d", sum);
    return 0;
}