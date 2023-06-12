#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a;
	printf("Enter wind speed: ");
	scanf("%d", &a);
	if(a<25)
		printf("Not a strong wind");
	
	else if ((a>=25)&&(a<=38)){
		printf("strong wind");
    }
	else if ((a>=39)&&(a<=54)){
		printf("gale");
    }
	else if ((a>=55)&&(a<=72)){
		printf("whole gale");
    }
	else{
		printf("hurricane");
    }
	return 0;
}
