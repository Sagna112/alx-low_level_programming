#include "main.h"
/**
 * main - alphabet in lower
 *
 * Deacription - print alphabet
 *
 * Return : 0 (success)
 */
void print_alphabet(void)
{
	char i = 'a';
	while (i <= 'z')
	{
		_putchar(i);
		i++;	
       }	
	_putchar('\n');
}


