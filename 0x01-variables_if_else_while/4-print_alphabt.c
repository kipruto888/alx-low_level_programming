#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 * followed by a new line, except q and e
 * Return: 0
*/
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		if ((c <= 'e') && (c != 'q'))
		putchar(c);

	c++;
}
	putchar('\n');
	return (0);
}
