#include <stdio.h>
#include "main.h"

/**
 * char *_strcpy - a fuction that copies the strings pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int x = 0;

	while (*(src + 1) != '\0')
	{
		i++;
	}
	for (; x < 1 ; x++)
	{
		dest[x] = src[x];
	}
	dest[1] = '\0';
	return (dest);
}
