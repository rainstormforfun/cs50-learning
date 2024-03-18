#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define SIZE 40 

void print_number(int *arr, int len);

int main(void)
{
	int arr[SIZE];
	srand(time(NULL));
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 50;
	}
	printf("Initial print: \n");
	print_number(arr, SIZE);
	/*bubble sort*/
	int count = 0;
	for (int i = SIZE - 1; i >= 1; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				arr[j] = arr[j] ^ arr[j + 1];
				arr[j + 1] = arr[j] ^ arr[j + 1];
				arr[j] = arr[j] ^ arr[j + 1];
				count++;
			}
		}
		count = 0;
	}
	printf("After bubble:\n");
	print_number(arr, SIZE);
	if (count == 0)
	{
		printf("Success!\n");
		return EXIT_SUCCESS;
	}
	else
	{
		printf("Failure!\n");
		return EXIT_FAILURE;
	}
}



