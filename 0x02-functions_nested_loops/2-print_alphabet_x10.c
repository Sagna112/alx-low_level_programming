#include "main.h"
/**
 * Description : print_alphabet_x10
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 1;
	char lp = 'a';
	while (i <= 10)
	{
		char lp = 'a';
		while (lp <= 'z')
		{
			_putchar(alp);
			lp++;
		}
		i++;
		_putchar('\n');
	}
}
