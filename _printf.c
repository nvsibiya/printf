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
	char check;
	va_list printf_arg;
	va_start(printf_arg, format);

	if (format == NULL)
		return (1);
	for (idx = 0; format[idx] != '\0'; idx++)
	{
		if (format[idx] == '%')
		{
			idx++;
			check = format[idx];
			if (check == 'c'|| check == 's')
			{
				len += (f_caller(check))(printf_arg);
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
