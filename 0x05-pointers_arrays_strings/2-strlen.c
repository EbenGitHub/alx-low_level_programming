#include "main.h"

/** 
 * create that count the length of a string
 * @ster_len
 * Return 0 on success
 */

int _strlen(char *s);
{
	int count = 0;
	while (*(s + count) != '\0')
		count++;
	return (count);
}
