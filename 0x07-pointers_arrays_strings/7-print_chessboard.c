#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: pointer to pointer
 */
void print_chessboard(char (*a)[8])
{
	int i, j, len;

	len = strlen(a);
	for (i = 0; i < len; i++)
	{
		for (j = 0; j < len; j++)
			printf("%c", a[i][j]);
		printf("\n");
	}
}
