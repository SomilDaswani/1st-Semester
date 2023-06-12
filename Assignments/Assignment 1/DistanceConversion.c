#include <stdio.h>
#include <stdlib.h>

int main()
{
	float a;
	printf("Enter distance in KM: ");
	scanf("%f", &a);
	printf("\nDistance in meters= %.2f\n", a*1000);
	printf("Distance in feet= %.2f", a*3280.84);
	return 0;
}