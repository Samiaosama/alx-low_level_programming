#include "main.h"

/**
 * prints the alphabet - a function that prints the alphabet
 *
*/

void print_alphabet_x10(void)
{
	int line, ch;

	for (line = 0; line <= 9; line++)
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar (ch);
	_putchar ('\n');
}
