#include "main.h"
//Handles all format specifiers

//TODO: c,s,%

/**
 * printchar - convert char to char * then write
 * @arglist - list of arguements
 * 
 * Return: nothing
*/

void printchar(va_list arg_list)
{
    //printf("[CHAR HERE]");

    //TODO do some type guarding - if not char, return an error
    char buff[2];
    buff[1] = '\0';
    buff[0] = va_arg(arg_list, int);

    write_console(buff);
}

/**
 * printstr - straight forward forward arg to writer
 * @
*/
void printstr(va_list arg_list)
{
    write_console(va_arg(arg_list, char *));
}
void printliteral(va_list arg_list)
{

}