#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strstr - Finds the first occurrence of the substring needle in the string haystack.
 * The terminating null bytes (\0) are not compared
 * 
 * @haystack: The string that will be scanned.
 * @needle: This is the small string to be searched with-in haystack string.
 * 
 * Return: A pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
    unsigned int i;
    int len = len(needle);

    while (*haystack)
    {
        for (i = 0; needle[i] != '\0'; i++)
        {
            if (needle[i] != haystack)
                break;
        }
        
        if (len == i)
            return (haystack);

        haystack++;
    }
    return (NULL);

}