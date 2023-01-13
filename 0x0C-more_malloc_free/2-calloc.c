#include <stdlib.h>
#include "main.h"
/**
* _calloc - allocates memory of an array using malloc.
* @nmemb: number of elements in array.
* @size: size of elements of array
* Return: NULL is size of nmemb == 0.
* NULL if malloc fails.
* Pointer to memory allocated if successful.
*/
void *_calloc(unsigned in nmemb, unsigned int size)
{
	void *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL0
	{
		return (NULL);
	}
	for (i = o; i < (nmemb * size); i++)
	{
		*((char *)(p) + i) = 0;
	}
	return (p);
}
