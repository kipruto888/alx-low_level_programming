#include <stdio.h>
/**
*main - write a program that prints its name, followed by a new line.
*if you name the program, it will print the new name, without having to
*compile it again.
*you shoul not remove the path before the name of the program.
*@argc: this is the argument count
*@argv: this is the argument vector
*Return: this return to 0
*/
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
