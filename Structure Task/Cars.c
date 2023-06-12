#include <stdio.h>

struct cars{
	char brand[10];
	char model[10];
	int price;
};

int main()
{
	struct cars c;
	
	printf("Enter the brand name of the car: ");
	scanf("%s", c.brand);
	printf("Enter the model number of the car: ");
	scanf("%s", c.model);
	printf("Enter the price of the car: ");
	scanf("%d", &c.price);
	printf("\n");
	printf("Brand Name: %s\n", c.brand);
	printf("Model Number: %s\n", c.model);
	printf("Price : %d\n", c.price);
}
