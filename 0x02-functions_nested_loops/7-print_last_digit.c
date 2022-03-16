#include "main.h"
/**
 * main - Entry into code
 * Return: return 0
 */
int print_last_digit(int i)
{
i = i % 10;
if (i < 0)
{
i = -1;
}
_putchar(i + '0');
return (i);
}
