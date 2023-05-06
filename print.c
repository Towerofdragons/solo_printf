#include "main.h"
/**
 * _printf - imitate stdio printf
 * @format: string for printing
 * @...: start of extra input
 * 
 * Return: chars printed excluding null byte
*/

int _printf(const char *format, ...)
{
    DWORD written;
    va_list args;

    int index;
    int list_index;
    handle_t hConsoleOut;
    char curr_char[2];
    curr_char[1] = '\0';

    list options[] = {
        {"c", printchar},
        {"s", printstr},
        {"%", printliteral},
        {NULL,NULL}
    };

    va_start(args,format);

   
    index = 0;
    while (format[index] != '\0')
    {
        if (format[index] == '%')
        {
            if (format[index + 1] == '%')
            {
                //write literal %
                break;
            }
            else
            {
                list_index = 0;
            //TODO specifier list

                while (options[list_index].specifier != NULL)
                {
                    if (*(options[list_index].specifier) == format[index+1])
                    {
                        options[list_index].fun_ptr(va_arg(args, char *));
                    }
                    list_index++;
                }
                
            }

            index++; /*skips to directly ahead of the specifier*/
        }
        else
        {
            //printf("%c", format[index]);
            curr_char[0] = format[index];
            write_console(curr_char);
        }
        index++;
    }

    

    return (0);

}