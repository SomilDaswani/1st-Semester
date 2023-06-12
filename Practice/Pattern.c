#include <stdio.h>
#include <stdlib.h>

int main()
{
	for(int i=1; i<=5; i++)
	{
		for(int j=i; j<=4; j++)
		{
			printf("  ");
		}
		for(int k=1; k<=i; k++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
