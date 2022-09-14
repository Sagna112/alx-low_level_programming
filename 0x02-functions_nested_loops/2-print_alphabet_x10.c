#include "main.h"
/**
 * Description : print_alphabet_x10
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 1;
	char alp;
	while (i <= 10)
	{
		char alp = 'a';
		while (alp <= 'z')
		{
			_putchar(alp);
			alp++;
		}
		i++;
		_putchar('\n');
	}
}
