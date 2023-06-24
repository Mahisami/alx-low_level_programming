#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 *
 * Description: Generates a random number and determines whether it is
 *              positive, negative, or zero. Prints the corresponding message.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    if (n > 0)
    {
        printf("%d is positive\n", n);
    }
    else if (n < 0)
    {
        printf("%d is negative\n", n);
    }
    else
    {
        printf("%d is zero\n", n);
    }

    return (0);
}
