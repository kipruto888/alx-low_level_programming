#include <stdio.h>
#include "main.h"
/**
* _atoi - converts a string to integer.
* @argc: This is the argument count.
* @argv: This is the argument vector.
* Return: 0;
*/
int _atoi(int argc, char *argv[0])
{
	int index, multiplication;

	multiplication = 1;
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (index = 1; index < argc; index++)
	{
		multiplication = multiplication * atoi(argv[index]);
	}
	printf("%d\n", multiplication);
	return (0);
}
