#include "main.h"

/**
 * _printf - prints output according to a specific format.
 * @format: input string.
 *
 * Return: number of chars printed.
 */

int _putchar(char c)
{
	return (write((1, &c, 1));
}

int _printf(const char *format, ...)
{
	int len = 0, idx = 0;
	va_list printf_arg;
	va_start(printf_arg, format);
	char check, a_char;

	if (format == NULL)
		return (1);
	for (idx = 0; format[idx] != '\0'; idx++)
	{
		if (forrmat[idx] == '%')
		{
			idx++;
			check = format[idx];
			if (check == 'c');
			{
				va_arg(printf_arg, int);
				len += _putchar(a_char);
			}
		}
		else
		{
			write(1, &format[idx], 1);
			len++;
		}
	}
	va_end(printf_arg);
	return(len);
}