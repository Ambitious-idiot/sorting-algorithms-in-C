//bubble sort for integers
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main (void)
{
	int arr[SIZE], i, j, isSwapped;

	srand((unsigned int)time(NULL));

	for (i = 0; i < SIZE; i++)
		arr[i] = rand() % 10;
	for (i = 0; i < SIZE; i++)
		printf("%4d",arr[i]);
	printf("\n");
	for (i = 1; i < SIZE; i++)
	{
		isSwapped = 1;
		for (j = 0; j < SIZE - i; j++)
			if (arr[j] > arr[j + 1])
			{
				arr[j] -= arr[j + 1];
				arr[j + 1] += arr[j];
				arr[j] = arr[j + 1] - arr[j];
				if (isSwapped == 1)
					isSwapped = 0;
			}
		if (isSwapped)
			break;
	}
	for (i = 0; i < SIZE; i++)
		printf("%4d",arr[i]);
	printf("\n");

	return 0;
}
