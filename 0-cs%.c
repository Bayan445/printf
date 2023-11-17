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
	{
		write(1, "(null)", 6);
		(*count) += 6;
	}

	/*
	 * else
	{
		write(1, str, strlen(str));
		count += strlen(str);
	}
	*/


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
 * printInt - Handles printing an integer.
 * @integer: The integer to be printed.
 * @count: Pointer to the count of printed characters.
 */
void printInt(int integer, int *count)
{
	
	putchar("%d", integer);
	(*count)++;

}
