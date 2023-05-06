#include "main.h"

#define INVALID_HANDLE_ERROR_MSG "Invalid Handle, cannot print to terminal."


int write_console(char *str)
{
    DWORD written;
    handle_t hConsoleStdOut;

    //printf("ACCESSED!");

    if ((hConsoleStdOut = GetStdHandle(STD_OUTPUT_HANDLE)) == INVALID_HANDLE_VALUE)
    {
        WriteFile(hConsoleStdOut, INVALID_HANDLE_ERROR_MSG, strlen(INVALID_HANDLE_ERROR_MSG), &written, NULL);
        return (-1);
    }

    //TODO- Custom strlen function... int _strlen(char *str);

    WriteFile(hConsoleStdOut, str, strlen(str), &written, NULL);
}
