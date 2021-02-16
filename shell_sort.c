//Shell sort for integers
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void shell_sort( int *arr, int size );

int main ( void )
{
	int arr[ SIZE ], i, j;

	srand ( ( unsigned int ) time ( NULL ) );

	for ( i = 0; i < SIZE; i ++ )
		arr[ i ] = rand() % 1000;
	for ( i = 0; i < SIZE; i ++ )
		printf( "%4d", arr[ i ] );
	printf( "\n" );

	shell_sort( arr, SIZE );

	for ( i = 0; i < SIZE; i ++ )
		printf ( "%4d", arr[ i ] );
	printf ( "\n" );

	return 0;
}

void shell_sort( int *arr, int size )
{
	int i, j, k, gap, temp;
	for ( gap = size / 2; gap > 0; gap /= 2 )
		for ( i = 0; i < gap; i ++ )
			for ( j = i + gap; j < size; j += gap )
			{
				temp = arr[ j ];
				k = j - gap;
				while ( k > -1 && arr[ k ] > temp )
				{
					arr[ k + gap ] = arr[ k ];
					k -= gap;
				}
				arr[ k + gap ] = temp;
			}
}