#include "main.h"

/** main - Entry point
 * 
 * Return: Always 0
*/

int main (void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    char c;
    char *str;

    c = '|';
    str = "Hello there";

    len = _printf("Let's try to printf a simple sentence.\n");
    if (len == -1)
    {
        write_console("Print failure\n");
    }
    len2 = printf("Let's try to printf a simple sentence.(generic Printf)\n");

    _printf("Let's try to printf a literal %c.\n");
    printf("Let's try to printf a literal .(generic Printf)\n");

    return (0);

}