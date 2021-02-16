//merge sort for integers
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void mergeSort ( int * arr, int left, int right );

int main ( void )
{
	int arr[ SIZE ], i, j;

	srand( ( unsigned int ) time ( NULL ) );

	for ( i = 0; i < SIZE; i ++ )
		arr[ i ] = rand() % 10;
	for ( i = 0; i < SIZE; i ++)
		printf ( "%4d", arr[ i ] );
	printf( "\n" );

    mergeSort( arr, 0, SIZE - 1 );

	for ( i = 0; i < SIZE; i ++ )
		printf( "%4d", arr[ i ] );
	printf( "\n" );

	return 0;
}

void mergeSort ( int * arr, int left, int right )
{
    if ( left < right ) {
        int mid = ( left + right ) / 2;

        mergeSort( arr, left, mid );
        mergeSort( arr, mid + 1, right );

        int i = left, j = mid + 1, k = 0;
        int lLimit = mid + 1, rLimit = right + 1;
        int *temp = ( int * )malloc( sizeof( int ) * ( right - left + 1 ) );
        while ( 1 )
            if ( arr[ i ] <= arr[ j ] && j < rLimit && i < lLimit )
                temp[ k ++ ] = arr[ i ++ ];
            else if ( arr[ i ] > arr[ j ] && j < rLimit && i < lLimit )
                temp[ k ++ ] = arr[ j ++ ];
            else
                break;
        while ( i < lLimit )
            temp[ k ++ ] = arr[ i ++ ];
        while ( j < rLimit )
            temp[ k ++ ] = arr[ j ++ ];
        for ( i = left, j = 0 ; i < rLimit; i ++, j ++ )
            arr[ i ] = temp[ j ];
        free( temp );
    }
}