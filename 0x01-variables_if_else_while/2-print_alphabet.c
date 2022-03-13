#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the alphabet in lower case,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
putchar('\n');
return (0);
}
