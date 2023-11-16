#include "main.h"

/**
 * printChar - Handles printing a character.
 * @character: The character to be printed.
 * @count: Pointer to the count of printed characters.
 */
void printChar(int character, int *count)
{
	putchar(character);
	(*count)++;
}

/**
 * printString - Handles printing a string.
 * @str: The string to be printed.
 * @count: Pointer to the count of printed characters.
 */
void printString(char *str, int *count)
{
	if (str == NULL)
		str = "null";
	while (*str != '\0')
	{
		putchar(*str);
		str++;
		(*count)++;
	}
}

/**
 * printPercent - Handles printing the percent sign.
 * @count: Pointer to the count of printed characters.
 */
void printPercent(int *count)
{
	putchar('%');
	(*count)++;
}

/**
 * handleFormatSpecifier - Handles a format specifier.
 * @specifier: The format specifier to handle.
 * @thearguments: The va_list containing the arguments.
 * @count: Pointer to the count of printed characters.
 */
void handleFormatSpecifier(char specifier, va_list thearguments, int *count)
{
	switch (specifier)
	{
	case 'c':
		printChar(va_arg(thearguments, int), count);
		break;
	case 's':
		printString(va_arg(thearguments, char*), count);
		break;
	case '%':
		printPercent(count);
		break;
	default:
		putchar(specifier);
		(*count)++;
	}
}

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


