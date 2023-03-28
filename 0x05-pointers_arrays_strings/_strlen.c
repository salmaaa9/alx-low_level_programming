#include <unistd>
#include "main.h"

/**
 * _strlen - returns size of string
 *@s:a pointer to char
 * Return: length an int
 */

int _strlen(char *s)
{
        int len = 0;

        while (s[len] != '\0')
        {
                len++;
        }
        return (len);
}
