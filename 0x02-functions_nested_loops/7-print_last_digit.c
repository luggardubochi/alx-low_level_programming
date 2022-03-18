#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - prints the last digit of a number
 * @i: integer param
 * Return: return 0
 */
int print_last_digit(int n)
{
int last_digit = n % 10;
if (last_digit < 0)
{
_putchar(-last_digit + 48);
return (-last_digit)
}
else
{
_putchar(last_digit + 48);
return (last_digit);
}
}
