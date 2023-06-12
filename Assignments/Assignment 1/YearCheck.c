#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, c, e, g;
	int b=4, d=400, f=100;
	printf("Enter year: ");
	scanf("%d", &a);
	c=(a%b);
	e=(a%d);
	g=(a%f);
	if ((c==0)&&(g!=0)){
		printf("%d is leap year", a);
	}
	else if(e==0){
		printf("%d is leap year", a);
	}
	else if(c==1){
		printf("leap year will come after three years");
	}
	else if(c==2){
		printf("leap year will come after two years");
	}
	else if(c==3){
		printf("leap year will come after one year");
	}
	else{
		printf("The given year is not a leap year");
	}
	return 0;
}
