#include "main.h"
/**
 * main - alphabet in lower
 *
 * Deacription - print alphabet
 *
 * Return : 0 (success)
 */
void print_alphabet(void);
int main(void)
{
	print_alphabet();
	{
		char i = 'a';
	while (i <= 'z')
	{
		_putchar(i);
		i++;	
       }	
	_putchar('\n');
	}


	return 0;
}
