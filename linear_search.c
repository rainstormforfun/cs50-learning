#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 50
int main(void)
{
	int ans = 20;

	srand(time(NULL));
	int arr[SIZE];
	for (int i = 0; i < SIZE; i++)
	{	
		arr[i] = rand() % 40;
	}

	/*linear Search*/
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] == ans)
		{
			printf("Success! The answer is %d.\n", i);
			return EXIT_SUCCESS;
		}
	}
	printf("Failure!\n");
	return EXIT_FAILURE;
}
		
