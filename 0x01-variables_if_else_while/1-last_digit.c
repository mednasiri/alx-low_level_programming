#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - main block
 * Description: Get a random number and check its last digit, compare it with 5
 * Return: 0
 */
int main(void)
{
        int n;
        int last;
        srand(time(0));
        n = rand() - RAND_MAX / 2;
        /* your code goes there */
        last = n % 10;
    /* Add a blank line */
    printf("\n");
        if (last > 5)
                printf("Last digit of %i is %i and is greater than 5\n", n, last);
        else if (last == 0)
                printf("Last digit of %i is %i and is 0\n", n, last);
        else if (last < 6)
                printf("Last digit of %i is %i and is less than 6 and not 0\n", n, last);

        return (0);
}
