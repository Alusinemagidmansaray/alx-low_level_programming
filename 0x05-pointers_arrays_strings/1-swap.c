#include "main.h"
/**
 * swap_int - this function swap two int
 * @a: first parameter
 * @a: second parameter
 * REturn: void
 */

void swap_int(int *a, int *b);
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
