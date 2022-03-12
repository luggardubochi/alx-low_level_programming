#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: "assign a random number to the variable n"
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;
    srand(time(0));
    n = rand() - RAND_MAX / 2;
    if (n > 0)
        printf("%d is poitive\n", n);
    else if (n == 0)
        printf("%d is zero\n", n);
    else if (n < 0)
        printf("%d is negative/n", n);
    return (0);
}
