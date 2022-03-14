#include <stdio.h>
/**
 * main - print all single digit numbers less than 10
 * Return: Zero if code runs without exception
 */
int main(void)
{
int x;
do {
putchar(x + '0');
x++;
} while (x <= 9);
putchar('\n');
return (0);
}
