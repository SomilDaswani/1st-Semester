#include <stdio.h>

void sort(int arr[]) 
{
    int temp;
    for (int i = 0; i < 5; i++) 
	{
        for (int j = i + 1; j < 5; j++) 
		{
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
	int array [5];
	for(int i = 0, n = i + 1; i < 5; i++, n++)
	{
		printf("Enter the %d element of an array: ", n);
		scanf("%d", &array[i]);
	}
	printf("\n");
	sort(array);
	for(int i = 0, n = 1; i < 5; i++, n++)
	{
		printf("%d element after sorting an array: %d\n", n, array[i]);
	}
	return 0;
}