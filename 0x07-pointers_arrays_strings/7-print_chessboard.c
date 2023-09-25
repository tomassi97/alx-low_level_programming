#include "main.h"

/**
 * print_chessboard - Prints the chessboard.
 * @a: The 2D array representing the chessboard.
 *
 * Description: This function prints the contents of the chessboard.
 *              It assumes the input array is a valid 8x8 chessboard.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
