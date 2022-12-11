#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 * followed by a new line, except q and e
 * Return: 0
*/
int main(void)
{
	for (int x = 'a'; x <= 'z'; x++)
	{
	putchar(x);
	}
	{
	if ((x != 'q' && x != 'e') && x <= 'z')
		putchar(x);
	}
	putchar('\n);
	return 0;
{

