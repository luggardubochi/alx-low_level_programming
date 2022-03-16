#include "main.h"
/**
 * main - Entry point of code 
 * Return: returns 1 and print + if n is greater than zero
 * returns 0 and prints 0 if n is zero,
 * returns -1 and print - if n is less than zero
 */
int print_sign(int n)
{
int value;
if (n > 0)
{
value = 1;
_putchar('+');
}
else if (n == 0)
{
value = 0;
_putchar('0');
}
else
{
value = -1;
_putchar('-');
}
return (value);
}
