#include "main.h"
#include <stdlib.h>
/**
* create_array - array for prints a string
* @size: number elements array.
* @c: char
* Return: pointer
*/

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);


	buffer = (char *) malloc(size * sizeof(c));

	if (buffer == 0)
	{
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
