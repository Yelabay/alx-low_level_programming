#include <stdio.h>

/**
 * main - print all the numbers of base 16 in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = '0';
	int a_to_f = 'a';

	while (n <= '9') /*print 0-9*/
	{
		putchar(n);
		n++;
	}
	while (a_to_f <= 'f') /*print a-f to finish base 16*/
	{
		putchar(a_to_f);
		a_to_f++;
	}
	putchar('\n');
	return (0);
}