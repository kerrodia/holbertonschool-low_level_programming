#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 *@a: input a.
 *@b: input b.
 */
void swap_int(int *a, int *b)
{
int n;

n = *a;
*a = b;
*b = n;
}
