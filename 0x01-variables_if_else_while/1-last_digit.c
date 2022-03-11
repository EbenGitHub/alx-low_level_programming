#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Determine if a random number is greater, equal or less than 5.
(*
 * Return: 0 on success
 */
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        /* your code goes there */
        if (n % 10 > 5)
        {
                printf("%s %d is %d %s\n", "Last digit of", n, n % 10, "and is greater than 5");
        }
        else if (n % 10 < 6 && n % 10 != 0)
        {
                printf("%s %d is %d %s\n", "Last digit of", n, n % 10, "and is less than 6 and not 0");
        }
        else if (n % 10 == 0)
        {
                printf("%s %d is %d %s\n", "Last digit of", n, n % 10, "and is 0");
        }
        return (0);

}
