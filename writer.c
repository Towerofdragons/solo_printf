#include "main.h"


int write_console(char *str)
{
    DWORD written;
   
    //TODO- Custom strlen function... int _strlen(char *str);

    WriteFile(hConsoleStdOut, str, strlen(str), &written, NULL);
}
