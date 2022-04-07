#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void *malloc_checked(unsigned int b)
{
	if (b == NULL)
		return (0);

	int *ptr = (int *)malloc(b*(sizeof(int)));

	if (ptr == NULL)
		return (98);
