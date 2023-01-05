#include "main.h"

/**
*is_prime_number - recursion loop
* @num: num
* @iterator: number to iterate
* Return: return 1 0r 0
*/
int is_prime_number(int num, int iterator)
{
	if (iterator == num - 1)
{
	return (1);
}
	else if (num % iterator == 0)
{
	return (0);
}
	if (num % iterator != 0)
{
	return (is_prime_number(num, iterator + 1));
}
	return (0);
}
