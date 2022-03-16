#include "main.h"
/**
 * main - Entry into code
 * times_table - printing the 9 times table
 */
void time_table(void)
{
int i, j, mul;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
mul = i * j;
if (j != 0)
{
_putchar(',');
_putchar(' ');
}
if (j == 0)
{
_putchar('0');
}
else if (mul >= 10)
{
_putchar((mul / 10) + '0');
_putchar((mul % 10) + '0');
}
else if ((mul < 10) &&  (j != 0))
{
_putchar(' ');
_putchar((mul % 10) + '0');
}
}
_putchar('\n');
}
}