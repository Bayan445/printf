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
	
	case 'd':
	case 'i':
	
		printInt(va_arg(thearguments, int), count);
		break;
	
	
	default:
                putchar(specifier);
                (*count)++;
        }
}

