#include "main.h"

/**
* _printf - prints formatted output to stdout
* @format: format string
*
* Return: number of characters printed
*/
int _printf(const char *format, ...)
{
int count = 0;
va_list args;
va_start(args, format);
if (format == NULL || (format[0] == '%' && format[1] == '\0'))
return (-1);
while (*format != '\0')
{
if (*format == '%')
{
format++;
switch (*format)
{
case 'c':
count += print_char(va_arg(args, int));
break;
case 's':
count += print_string(va_arg(args, char*));
break;
case 'i':
case 'd':
count += print_number(va_arg(args, int));
break;
case '%':
count += print_char('%');
break;
default:
count += print_char('%');
count += print_char(*format);
}
}
else
{
count += print_char(*format);
}
format++;
}
va_end(args);
return (count);
}
