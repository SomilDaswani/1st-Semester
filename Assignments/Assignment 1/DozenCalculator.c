#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, c;
    int b=12;
    printf("Enter number of oranges: ");
    scanf("%d", &a);
    c=(a%b);
	if (c==0){
    	printf("%d oranges makes %d of dozens", a, a/b);
	}
	else{
		printf("Your required oranges cannot be given in dozens");
	}
	return 0;
}
