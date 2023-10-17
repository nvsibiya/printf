#include "main.h"

/**
 * _printf - prints output according to a specific format.
 * @format: input string.
 *
 * Return: number of chars printed.
 */

int _printf(const char *format, ...)
{
	int len = 0, idx = 0;
	va_list printf_arg;
	va_start(printf_arg, format);
	char check, a_char; *str;

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
			else if (check == 's')
			{
				str = va_arg(printf_arg, char *);
				len += _putstr(str);
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
