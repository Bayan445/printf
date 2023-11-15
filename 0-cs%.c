#include "main.h"

/**
 *
 *
 *
 */

int _printf(const char *format, ...)
{

	va_list thearguments;
	va_start (thearguments, format);

	int count = 0;


	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;

			/*Here we are handling %c case*/
			if (*format == 'c')
			{
				int mychar = va_arg(thearguments, int);
				putcahr(mychar);
				count++;
			}

			/*Here we will handle case of %s inshallah*/
			else if (*format == 's')
			{
				char *string = va_arg(thearguments, char*);
				while (string != '\0')
				{
					putchar(*string);
					string++;
					count++;
				}
			}
			/*the precent case*/
			else if (*format == '%')
			{
				putcahr('%');
				count++;
			}

			/*with other text data*/
			else 
			{
				putchar(*format);
				count++;
			}


		}
		format++;
	}

		va_end(thearguments);
		return (count);
}



