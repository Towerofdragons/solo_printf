#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stddef.h> 
#include <stdlib.h>
#include <limits.h>
#include <stdarg.h> //Allow access to variadic functions
#include <Windows.h>

/**
 * struct specifier_list
 * 
*/

typedef struct specifiers
{
    char *specifier;
    void (*fun_ptr)(char* arg);
}list;

int _printf(const char *format, ...);

void printchar(char *arg);
void printstr(char *arg);
void printliteral(char *arg);
int write_console(char *str);

#endif