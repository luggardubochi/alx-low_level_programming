#include "main.h"
/**
 * main - Entry of code
 * Return: returns value
 */
int _islower(int c)
{
int value;
if (c >= 'a' && c <= 'z')
{
value = 1;
}
else
{
value = 0;
}
return (value);
}
