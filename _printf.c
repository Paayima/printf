#include "main.h"
/**
* the function _printf - print the number of characters entered at the stdio
* to the stdout
*
* Return 0 
*/
int _printf(const char *format, ...)
{
	int (*pfunc)(va_list, flags_t *);
	const char *p;
	flags_t flags = {0, 0, 0};

        register  int count = 0;

        va_list arh;

        va_start(arh, format);

        if(!format || (format[0] == '%' && !format[1]))
		return (-1);
	if(format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for(p = format; *p; p++)
        {
		if(*p == '%')
		{
			p++;
			if(*p == '%')
			{
				count += _putchar('%');
				continue;
			}
			while (get_flag(*p, &flags))
				p++;
			pfunc = get_print(*p);
			count += (pfunc)
				? pfunc(arh, &flags)
				: _printf("%%%c", *p);
		}else
			count += _putchar(*p);
        }
	_putchar(-1);
	va_end(arh);
        return (count);
}
