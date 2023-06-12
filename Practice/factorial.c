#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, f=1;
	int mul=1;
	printf("Enter a number: ");
	scanf("%d", &i);
	while(i!=0)
	{
		printf("%d", i);
		mul*=i;
		i--;
		if(i>0)
		printf("*");
	}
	printf("=%d",mul);
	return 0;
}
