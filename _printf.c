#include "main.h"
#include <stdarg.h>
#include <string.h>
  
/**
* the function _printf - print the number of characters entered at the stdio
* to the stdout
*
* Return 0 
*/
int _printf(const char *format, ...)
{
	va_list arh;
	int i, count=0;

	va_start(arh,format);
	for(i = 0; i < strlen(va_arg(arh, char)); i++)
	{
		if(va_arg(format, char) !='\0')
			count++;
	}
	va_end(arh)
	_putchar(1, count, 4);		
	return 0;
}
