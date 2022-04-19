#include "main.h"
/**
* the function _printf - print the number of characters entered at the stdio
* to the stdout
*
* Return 0 
*/
int _printf(const char *format, ...)
{
        int i, count=0;
        char *z;

        va_list arh;

        va_start(arh, format);

        for(i = 0; i < *z; i++)
        {
                z = va_arg(arh, char *);
                if(*z !='\0')
                        count++;
        }
        va_end(arh);
        printf("%d", count);
        _putchar(count);
        return 0;
}
