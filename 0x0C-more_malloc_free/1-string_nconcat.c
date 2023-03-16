#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * string_nconcat - concatenates s1 and first n characters of s2
 * @s1: first string
 * @s2: second string
 * @n: prints s2
 * Return: catn
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *catn, **s2n;
	unsigned int i;
	int len = strlen(s1) + strlen(s2);

	if (s1 == NULL)
		return ("");
	if (s2 == NULL)
		return ("");

	catn = malloc(sizeof(char) * len);

	if (catn == NULL)
		return (NULL);

	for (i = 0; i <= n; i++)
	{
		s2n = s2[i];
		strcat(s1, s2n);
	}

	return (catn);
}
