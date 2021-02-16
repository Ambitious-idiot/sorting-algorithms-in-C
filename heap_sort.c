//quick sort for integers
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void heap_sort( int * arr, int size );

int main ( void )
{
	int arr[ SIZE ], i, j;

	srand( ( unsigned int ) time ( NULL ) );

	for ( i = 0; i < SIZE; i ++ )
		arr[ i ] = rand() % 10;
	for ( i = 0; i < SIZE; i ++)
		printf ( "%4d", arr[ i ] );
	printf( "\n" );

    heap_sort( arr, SIZE );

	for ( i = 0; i < SIZE; i ++ )
		printf( "%4d", arr[ i ] );
	printf( "\n" );

	return 0;
}

void heap_sort( int * arr, int size )
{
    int i, j, son, parent, temp, curSize;

    for ( i = size / 2 - 1; i > -1 ; i -- )
    {
        parent = i;
        son = parent * 2 + 1;
        if ( son < size )
        {
            if ( son < size - 1 && arr[ son ] < arr[ son + 1 ] )
                son ++;
            if ( arr[ son ] > arr[ parent ] )
            {
                temp = arr[ son ];
                arr[ son ] = arr[ parent ];
                arr[ parent ] = temp;
            }
        }
    }

    for ( i = 1; i < SIZE; i ++ )
    {
        curSize = size - i;
        temp = arr[ 0 ];
        arr[ 0 ] = arr[ curSize ];
        arr[ curSize ] = temp;

        for ( j = curSize / 2 - 1; j > -1 ; j -- )
        {
            parent = j;
            son = parent * 2 + 1;
            if ( son < curSize )
            {
                if ( son < curSize - 1 && arr[ son ] < arr[ son + 1 ] )
                    son ++;
                if ( arr[ son ] > arr[ parent ] )
                {
                    temp = arr[ son ];
                    arr[ son ] = arr[ parent ];
                    arr[ parent ] = temp;
                }
            }
        }
    }
}