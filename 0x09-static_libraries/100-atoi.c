#include "main.h"

/**
 * _atoi - convert a string int an integer
 *
 *  @s: the string to use
 *
 *  Return: integer
 */
int _atoi(char *s)
{
	int sign = 1, i = 0;
	unsigned int rev = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		rev = (rev * 10) + (s[i] - '0');
		i++;
	}
	rev *= sign;
	return (rev);
}