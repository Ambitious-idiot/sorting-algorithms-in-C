//insertion sort for integers
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main (void)
{
	int arr[SIZE], i, j, insert;

	srand((unsigned int)time(NULL));

	for (i = 0; i < SIZE; i++)
		arr[i] = rand() % 10;
	for (i = 0; i < SIZE; i++)
		printf("%4d",arr[i]);
	printf("\n");
	for (i = 1; i < SIZE; i++)
	{
		insert = arr[i];
		for (j = i - 1; j >= 0; j--)
			if (arr[j] > insert)
				arr[j + 1] = arr[j];
			else
				break;
		if (j != i - 1)
			arr[j + 1] = insert;
	}
	for (i = 0; i < SIZE; i++)
		printf("%4d",arr[i]);
	printf("\n");

	return 0;
}
