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
int len_str;
int i;

if (c == NULL)
{
c = "(null)";
}
len_str = strlen(c);
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
int print_number(long int num)
{
int count = 0, i = 0;
int *digit = NULL;
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

digit = (int *) malloc(sizeof(int));
while (num > 0)
{
digit = (int *) realloc(digit, (i + 1) * sizeof(int));
digit[i] = num % 10;
num /= 10;
count++;
i++;
}
for (i = i - 1; i >= 0; i--)
{
print_char(digit[i] + '0');
}
free(digit);
return (count);

}
