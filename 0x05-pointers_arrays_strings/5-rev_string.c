#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: pointer int type
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int i, j;
	char temp[9];

	for (i = 0; *s != '\0'; i++)
	{
		temp[i] = *s;
		s++;
	}
	s--;

	for (j = 0; j != i; j++)
	{
		*s = temp[j];
		s--;
	}
	s++;

}
