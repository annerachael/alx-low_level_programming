#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i = 0;
	int ch;
	for (i=0;i<10;i++){

		for (ch ='a'; ch <='z'; ch++)
			putchar(ch);
			putchar('\n');
	}
	i++;
	return;
	
}
