#include <stdio.h>
/**
 * main - Print combination of two digits
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
int j;
int fdi;
int ldi;
int fdj;
int ldj;
for (i = 0; i <= 99; i++) {
for (j = 0; j <= 99; j++) {
if (i >= j)
continue;
fdi = i / 10;
ldi = i % 10;
}
}
putchar(fdi + '0');
putchar(ldi + '0');
putchar('');
putchar(fdj + '0');
putchar(ldj + '0');
}
