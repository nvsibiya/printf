#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

typedef struct function_character
{
	char specifier;
	int (*funt)(va_list);
}f_ch;

/*_printf function*/
int _printf(const char *format, ...);
/*_putchar function to print single characters*/
int _putchar(va_list);
/*_putstr function to print strings*/
int _putstr(va_list);
/* *f_caller calls other funtions*/
int (*f_caller(char check))(va_list);

#endif
