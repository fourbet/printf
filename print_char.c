#include "holberton.h"
/**
 * print_char - prints char
 *
 * @a: va_list
 *
 * Return: void
 */
int print_char(va_list valist)
{
	char c;
	
	c = va_arg(valist, int);
	_putchar(c);
	return (1);
}