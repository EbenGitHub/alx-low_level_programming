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
	for (char ch = 'a'; ch <= 'z'; ch++)
    {
        printf("%c ", ch);
    }
	return (0);

}
