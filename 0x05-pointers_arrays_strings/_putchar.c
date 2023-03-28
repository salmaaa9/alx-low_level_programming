#include <unistd>
#include "main.h"

/**
 * _putchar - prints char
 *@c:a character to be printed
 * Return :1 success
 *         -1 otherwise
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
