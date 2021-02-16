//radix sort for integers
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void radix_sort( int * arr, int size );

int main ( void )
{
	int arr[ SIZE ], i, j;

	srand( ( unsigned int ) time ( NULL ) );

	for ( i = 0; i < SIZE; i ++ )
		arr[ i ] = rand() % 1000;
	for ( i = 0; i < SIZE; i ++)
		printf ( "%4d", arr[ i ] );
	printf( "\n" );

    radix_sort( arr, SIZE );

	for ( i = 0; i < SIZE; i ++ )
		printf( "%4d", arr[ i ] );
	printf( "\n" );

	return 0;
}

void radix_sort( int * arr, int size )
{
    int i, j = 10,  digit = 1;
    int maxDigit = 1;

    for ( i = 0; i < size; i ++ )
        if ( arr[ i ] / j )
        {
            i --;
            j *= 10;
            maxDigit ++;
        }

    int temp[ 10 ] = { 0 }, *num = ( int * )malloc( sizeof( int ) * size );
    for ( i = 0; i < maxDigit; i ++, digit *= 10 )
    {
        for ( j = 0; j < size; j ++ )
            temp[ ( arr[ j ] / digit ) % 10 ] ++;
        for ( j = 1; j < 10; j ++ )
            temp[ j ] += temp[ j - 1 ];
        for ( j = size - 1; j > -1; j -- )
            num[ -- temp[ ( arr[ j ] / digit ) % 10 ] ] = arr[ j ];
        for ( j = 0; j < size; j ++ )
            arr[ j ] = num[ j ];
        for ( j = 0; j < 10; j ++ )
            temp[ j ] = 0;
    }
    free( num );
}