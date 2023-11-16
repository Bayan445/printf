#include "main.h"

/**
 * _printf - A modified function like printf.
 * @format: The format string we will process.
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...)
{
	int count;
	va_list thearguments;

	va_start(thearguments, format);

	count = 0;

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			handleFormatSpecifier(*format, thearguments, &count);
		}
		else
		{
			putchar(*format);
			count++;
		}

		format++;
	}

	va_end(thearguments);
	return (count);
}

