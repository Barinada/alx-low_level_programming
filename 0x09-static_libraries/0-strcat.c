#include "main.h"
<<<<<<< HEAD
/**
 * _strcat - concatenates two strings
=======
 /**
 * -strcat - concatenates two strings
>>>>>>> eaf163b6643b2d0d504d6bd5f07630fdcb4e2aae
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
int i;
int j;
i = 0;
while (dest[i] != '\0')
{
i++;
}
j = 0;
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
