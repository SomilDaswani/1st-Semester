#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num, sum=0, first, last;
	printf("Enter an integer: ");
	scanf("%d", &num);
	last=num%10;
	while(num>=10)
	{
		num/=10;
	}
	first=num;
	sum=first+last;
	printf("Sum of first and last digit: %d", sum);
	return 0;
}