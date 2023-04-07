#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/*
 * get_bit - returns the value of a bit at an index in a dec.
 * @n: number to search
 * @index: index of the bit
 *
 * Return: val of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	 if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	 bit_val = (n >> index) & 1;
	return (bit_val);
	 
}
