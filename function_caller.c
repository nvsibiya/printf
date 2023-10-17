#include "main.h"

int (*f_caller(char check))(va_list)
{
	int idx = 0;

	f_ch fun_arr[] = {
		{'c', _putchar},
		{'s', _putstr},
		{'\0', NULL}
	};

	while (fun_arr[idx].specifier != '\0')
	{
		if (check == fun_arr[idx].specifier)
			return(fun_arr[idx].funt);
		idx++;
	}
	return(NULL);
}
