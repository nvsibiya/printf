#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

typedef struct func_char
{
	char sp;
	int func;
}

/*_printf function*/
int _printf(const char *format, ...);

#endif
