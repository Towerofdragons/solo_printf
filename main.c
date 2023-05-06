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

    char str;
    str = '|';

    len =  _printf("Let's try to printf a simple sentence %c.\n", str);
    len2 = printf("Let's try to printf a simple sentence.(generic Printf)\n");

    return (0);

}