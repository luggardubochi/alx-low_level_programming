#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - print the alphabeth in lowercase followed by a new line
 * Return: zero (Success)
 */
int main(void)
{
int ch;
for (ch= 'a'; ch <= 'z'; ch++)
_putchar(ch);
_putchar('\n');
return (0);
}
