#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - ...
 * @format: ...
 *
 * Return: ...
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i;
	char *s;
	int flag;

	va_start(ap, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		flag = 1;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				flag = 0;
				break;
			case 'i':
				printf("%i", va_arg(ap, int));
				flag = 0;
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				flag = 0;
				break;
			case 's':
				s = va_arg(ap, char*);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				flag = 0;
				break;
		}
		i++;
		if (format[i] != '\0' && flag == 0)
			printf(", ");
	}
	printf("\n");
	va_end(ap);
}
