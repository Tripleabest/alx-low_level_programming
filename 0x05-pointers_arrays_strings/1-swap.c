#include "main.h"

/**
 * swap_int - tajes two integer variable and swap them
 * @a: first variable
 * @b: second variable
 *
 * created by: Adebamipe Ayomide Adebukola
 * cc: 20 september, 2022
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
