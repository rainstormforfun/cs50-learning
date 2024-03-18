#include <stdio.h>
#include <stdlib.h>

void print_number(int *arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return;
}
