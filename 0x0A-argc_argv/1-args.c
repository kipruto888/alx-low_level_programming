#include <stdio.h>
#include "main.h"

/**
*main - write a program that prints the number of arguments passed into it
*@argc: this is the argument count
*@argv: this is the argument cover
*Return: this return to 0
*/
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;

	return (0);
}
