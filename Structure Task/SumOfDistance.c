#include <stdio.h>

struct distance{
	int feet;
	int inches;
};

int main()
{
	struct distance d1, d2, d3;
	
	printf("enter feet value for d1: ");
	scanf("%d", &d1.feet);
	printf("enter inches value for d1: ");
	scanf("%d", &d1.inches);
	printf("enter feet value for d2: ");
	scanf("%d", &d2.feet);
	printf("enter inches value for d2: ");
	scanf("%d", &d2.inches);
	
	d3.feet = d1.feet + d2.feet;
	d3.inches = d1.inches + d2.inches;
	
	while(d3.inches > 12)
	{
		d3.inches -= 12;
		d3.feet += 1;
	}
	
	printf("Sum of distance is %d feet and %d inches.", d3.feet, d3.inches);
	
	return 0;
}