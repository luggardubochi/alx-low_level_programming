#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point of the program
 * print the alphabet in reverse order
 * Return: always 0 (Success)
 */
int main(void)
{
char ch:
ch = 'z';
do {
putchar(ch);
ch--;
} while (ch >= 'a');
putchar('\n');
return (0);
}
