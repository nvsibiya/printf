#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

typedef struct func_char
{
	char sp;
	int *func(va_list);
}f_char;

/*_printf function*/
int _printf(const char *format, ...);
/*_putchar function to print single characters*/
int _putchar(va_list);
/*_putstr function to print strings*/
int _putstr(va_list);

#endif
