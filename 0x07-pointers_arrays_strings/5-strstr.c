#include <stdio.h>
#include "main.h"
/**
 * _strstr - En
 * @haystack: in
 * @needle: in
 * Return: Always 0
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *f = haystack;
char *s = needle;
while (*f == *s && *s != '\0')
{
f++;
s++;
}
if (*s == '\0')
return (haystack);
}
return (0);
}
