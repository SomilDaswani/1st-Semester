#include <stdio.h>

struct employee{
	int id, contact, age, salary;
	char firstname[10];
};

int main()
{
	struct employee paisa;
	
	printf("Enter the ID of an employee: ");
	scanf("%d", &paisa.id);
	printf("Enter the First Name of an employee: ");
	scanf("%s", paisa.firstname);
	printf("Enter the Contact Number of an employee: ");
	scanf("%d", &paisa.contact);
	printf("Enter the age of an employee: ");
	scanf("%d", &paisa.age);
	printf("Enter the Salary of an employee: ");
	scanf("%d", &paisa.salary);
	printf("\n");
	printf("\nID: %d", paisa.id);
	printf("\nFisrt Name: %s", paisa.firstname);
	printf("\nContact Number: %d", paisa.contact);
	printf("\nAge: %d", paisa.age);
	printf("\nSalary: %d", paisa.salary);
	return 0;
}