#ifndef MAIN_H
#define MAIN_H

#define INVALID_HANDLE_ERROR_MSG "Invalid Handle, cannot print to terminal."

#include <stdio.h>
#include <stddef.h> 
#include <stdlib.h>
#include <limits.h>
#include <stdarg.h> //Allow access to variadic functions
#include <Windows.h>

extern handle_t hConsoleStdOut;


/**
 * struct specifier_list
 * 
*/

typedef struct specifiers
{
    char *specifier;
    void (*fun_ptr)(va_list);
}list;

int _printf(const char *format, ...);

void printchar(va_list arg_list);
void printstr(va_list arg_list);
void printliteral(va_list arg_list);
int write_console(char *str);

#endif