#include "main.h"
#include <stdlib.h>
/**
* create_array - array for prints a string
* @size: number elements array.
* @c: char
* Return: NULL if it fails or pointer to array.
*/
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0 || str == NULL)
	{
		return (NULL);
	}

	str =  malloc(sizeof(char) * size);

	if (str == NULL)
	{
		return (NULL);

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
		return (str);
}
