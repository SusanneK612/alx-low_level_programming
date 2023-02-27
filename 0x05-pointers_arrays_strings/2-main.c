#include "MAIN.H"
#include <stdio.h>

/**
 *
 * Return: Always 0
 */
int main(void)
{
	char *str;
	int len;

	str = "My first strien!";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}
