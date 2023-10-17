#include "main.h"

int _putchar(va_list printf_arg)
{
	char a_char;
	a_char = va_arg(printf_arg, int);
        return (write(1, &a_char, 1));
}

int _putstr(va_list printf_arg)
{
	char *str = va_arg(printf_arg, char *);
        int i = 0;
        int str_len = 0;

        for (i = 0; str[i] != '\0'; i++)
        {
                write(1, &str[i], 1);
                str_len++;
        }
        return (str_len);
}
