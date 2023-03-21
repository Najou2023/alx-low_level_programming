#include "main.h"

/**
* main - checks the code
*
* Return: always 0.
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
