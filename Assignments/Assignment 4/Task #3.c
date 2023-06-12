#include <stdio.h>

void fibonacci(int limit) 
{
    int x = 0, y = 1, z;
    printf("Fibonacci series: %d %d ", x, y);
    for (int i = 2; i < limit; i++) 
	{
        z = x + y;
        printf("%d ", z);
        x = y;
        y = z;
    }
}

int main() 
{
    int limit;
    printf("Enter the limit of the Fibonacci series: ");
    scanf("%d", &limit);
    fibonacci(limit);
    return 0;
}
