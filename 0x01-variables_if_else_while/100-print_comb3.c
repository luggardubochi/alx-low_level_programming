#include <stdio.h>
/**
 * main - entry
 * Return: 0
 */
int main(void)
{
int x;
int y;
int z;
x = 0;
while (x < 100)
{
y = x / 10; 
z = x % 10;
if (y < z)
{
putchar(y + '0');
putchar(z + '0');
if (x < 89)
{
putchar(',');
putchar(' ');
}
}
x++;
}
putchar('\n');
return (0);
}
