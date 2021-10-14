#include "main.h"
/**
 *_strcat - concatenates two strings
 *@src: pointer char
 *@dest:pointer char
 *Return:pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; *dest != '\0'; i++)
	{
		dest++;
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		*dest = src[j];
		dest++;
	}
	*dest = '\0';
	dest -= (i + j);
	return (dest);
}
