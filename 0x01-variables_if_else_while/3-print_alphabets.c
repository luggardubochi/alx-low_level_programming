#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point of the program
 * print the alphabeth in lower case and upper case also new line
 * Return: Always 0 (Success)
 */
int main(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
for (ch = 'A'; ch <= 'Z'; ch++)
putchar(ch);
putchar('\n');
return (0);
}
