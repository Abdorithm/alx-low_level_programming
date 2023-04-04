#include "main.h"
/**
 * _strspn - En
 * @s: in
 * @accept: in
 * Return: Always 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;

	unsigned int j;

	unsigned int check;

	unsigned int value;

	value = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		check = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				check = 1;

				value++;
			}
		}
		if (check == 0)
		{
			return (value);
		}
	}
	return (value);
}
