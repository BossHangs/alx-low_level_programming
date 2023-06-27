#include <stdio.h>
#include "main.h"

/**
 * char *_strcpy - a fuction that copies the strings pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, const  char *src)
{
	int i = 0;


	while (src[1] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[1] = '\0';


	return (dest);
}
