#include "main.h"
/**
 * main - Entry of code
 * print_to_98
 */
void print_to_98(int n)
{
if (n > 98)
{
while (n >= 98)
{
if (n > 98)
{
printf("%d, ", n);
n--;
}
else if (n == 98)
{
printf("%d", n);
break;
}
}
}
else if (n < 98)
{
while (n <= 98)
{
if (n < 98)
{
printf("%d, ", n);
n++;
}
else if (n == 98)
{
printf("%d", n);
break;
}
}
}
else
{
printf("%d", n);
}
putchar('\n');
}
