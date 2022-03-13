#include <stdio.h>
/**
 * main - print all single digit numbers less than 10
 * Return: Zero if code run ithout exception
 */
int main(void)
{
int i;
for (i = 0; i < 10; i = i + 1)
printf("%d", i);
putchar('\n');
return (0);
}
