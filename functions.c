#include "main.h"

/**
* print_char - prints a characher
* @c: a character
* Return: 1
*/
int print_char(char c)
{
return (write(1, &c, 1));
}

/**
* print_string - prints a string
* @c: a string
* Return: the length of a string
*/
int print_string(char *c)
{
int len_str = strlen(c);
int i;

if (c == NULL)
{
c = "(null)";
}
for (i = 0; i < len_str; i++)
{
print_char(c[i]);
}
return (len_str);
}

/**
* print_number - prints an integer
* @num: an integer
* Return: the number of digits in that number
*/
int print_number(int num)
{
int count = 0;
int digit;
if (num < 0)
{
print_char('-');
num = -num;
count++;
}
if (num == 0)
{
print_char('0');
count++;
}
while (num > 0)
{
digit = num % 10;
print_char(digit + '0');
num /= 10;
count++;
}
return (count);

}
