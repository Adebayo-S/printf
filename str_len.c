#include "main.h"

/**
 * str_len - A function that returns the length of a string
 *@s: string
 * Return: always 0
 */

int str_len(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
