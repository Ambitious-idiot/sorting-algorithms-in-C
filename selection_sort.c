//selection sort for integers
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main (void)
{
	int arr[SIZE], i, j, min;
	
	srand((unsigned int)time(NULL));
	
	for (i = 0; i < SIZE; i++)
		arr[i] = rand() % 10;
	for (i = 0; i < SIZE; i++)
		printf("%4d",arr[i]);
	printf("\n");
	for (i = 0; i < SIZE - 1; i++)
	{
		min = i;
		for (j = min + 1; j < SIZE; j++)
			if(arr[min] > arr[j])
				min = j;
		if (min != i)
		{
			arr[i] -= arr[min];
			arr[min] += arr[i];
			arr[i] = arr[min] - arr[i];
		}
	}
	
	for (i = 0; i < SIZE; i++)
		printf("%4d",arr[i]);
	printf("\n");
	
	return 0;
}
