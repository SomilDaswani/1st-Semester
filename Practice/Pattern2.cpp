#include <stdio.h>

int main()
{
	int n;
	printf("Enter an integer: ");
	scanf("%d", &n);
	
	if(n%2 == 0){
		n+=1;
	}
	int i, j, k=1, f=n;
	for(i = 1; i <= n; i++)
	{
		for(j = 1; j <= n; j++)
		{
			if(j == k || j== f){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		k += 1; f -= 1;
		printf("\n");
	}
	return 0;
}