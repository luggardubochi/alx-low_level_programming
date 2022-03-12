#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description:print the last digit of a number
 * Return: Always zero (0)
 */
int main(void)
{
int n;
int a;
srand(time(0));
n = rand() - RAND_MAX / 2;
a = n % 10;
if (a > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, a);
else if (a == 0)
{
printf("Last digit of %d i %d and is %d and is 0\n", n, a);
else if (a < 6 && a != 0)
return (0);
}
