//quick sort for integers
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void quick_sort( int * arr, int left, int right );

int main ( void )
{
	int arr[ SIZE ], i, j;

	srand( ( unsigned int ) time ( NULL ) );

	for ( i = 0; i < SIZE; i ++ )
		arr[ i ] = rand() % 10;
	for ( i = 0; i < SIZE; i ++)
		printf ( "%4d", arr[ i ] );
	printf( "\n" );

    quick_sort( arr, 0, SIZE - 1 );

	for ( i = 0; i < SIZE; i ++ )
		printf( "%4d", arr[ i ] );
	printf( "\n" );

	return 0;
}

void quick_sort( int * arr, int left, int right )
{
    if ( left < right ) {
        int i = left, j = right;
        int mid = arr[ left ];
        while ( i < j ) {
            while ( arr[ j ] >= mid && i < j )
                j --;
            if ( i < j )
                arr[ i ++ ] = arr[ j ];
            while ( arr[ i ] < mid && i < j )
                i ++;
            if ( i < j )
                arr[ j -- ] = arr[ i ];
        }
        arr[ i ] = mid;

        quick_sort( arr, left, i - 1 );
        quick_sort( arr, i + 1, right );
    }
}