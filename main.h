#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int _printf(const char *format, ...);
void printChar(int character, int *count);
void printString(char *str, int *count);
void printPercent(int *count);
void handleFormatSpecifier(char specifier, va_list thearguments, int *count);
void printInt(int integer, int *count);



#endif
