#include "main.h"

/**
 * swap_int - main function
 * @a: pointer with the address value
 * @b: pointer with the address value
 * Description: this function takes a pointer to an int and updates the value it points to 98
 *
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a= *b;
	*b = x;
}
