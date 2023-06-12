#include <stdio.h>

void search(int arr[], int n)
{
	for(int i = 0, a = i + 1; i < 5; i++, a++)
	{
		if(n == arr[i]){
			printf("Element %d found at location %d", arr[i], a);
		}
	}
}

int main()
{
	int array[5], n;
	for(int i = 0, a = i + 1; i < 5; i++, a++)
	{
		printf("Enter the %d element of an array: ", a);
		scanf("%d", &array[i]);
	}
	printf("\nElement of an array are: ");
	for(int i = 0; i < 5; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("\n\nEnter the element to search an array: ");
	scanf("%d", &n);
	search(array, n);
	return 0;
}