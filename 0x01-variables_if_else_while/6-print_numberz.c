#include <stdio.h>
/**
 * main - print all single digit numbers less than 10
 * Return: Zero if code runs without exception
 */
int main(void)
{
int i;
for (i = 0; i < 10; i = i + 1)
putchar(i);
putchar('\n');
return (0);
}
