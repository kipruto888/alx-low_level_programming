#include <stdio.h>
#include "main.h"

/**
*main - write a program that prints the number of arguments passed into it
*@args: this is the argument count
*@argv: this is the argument cover
*Return: this return to 0
*/
int main(int args, cha *argv[])
{
	printf("%d\n", args - 1);
	(void)argv;

	return (0);
}
