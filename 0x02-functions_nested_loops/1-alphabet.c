#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_alphabet - a function that print the alphabeth,
 * in lowercase followed by a new line
 * Return: zero (Success)
 */
int print_alphabet(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
return (0);
}
