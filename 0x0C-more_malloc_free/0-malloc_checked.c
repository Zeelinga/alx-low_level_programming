#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - malloc memory and confirm success
 * @num: amount of memory to allocate
 * Return: pointer to memory, or exit code 98
 */
void *malloc_checked(unsigned int num)
{
	void *thing = malloc(num);

	if (thing == NULL)
		exit(98);
	return (thing);
}
