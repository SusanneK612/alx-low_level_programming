#include "main.h"

/**
 * flip_bits - ocunts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int exclusive_result = n ^ m;

	while (exclusive_result != 0)
	{
		count++;
		exclusive_result &= (exclusive_result - 1);
	}
	return (count);
}
