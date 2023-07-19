#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int i, ci;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = ci = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[ci] != '\0')
		ci++;
	concat_str = malloc(sizeof(char) * (i + ci + 1));

	if (concat_str == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		concat_str[i] = s1[i];
		i++;
	}

	while (s2[ci] != '\0')
	{
		concat_str[i] = s2[ci];
		i++, ci++;
	}
	concat_str[i] = '\0';
	return (concat_str);
}
