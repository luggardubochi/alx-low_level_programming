#include <stdio.h>
/**
 * main - entry point
 * Description: print all letters of alphabets except q and e
 * Return: return 0 (Success)
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'q' && ch != 'e')
{
putchar(ch);
}
else
{
}
}
putchar('\n');
return (0);
}
