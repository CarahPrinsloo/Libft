/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

int     str_length(char *str)
{
    int length;
    int index = 0;
    
    length = 0;
    while (str[index++])
        length++;
    return (length);
}

char *ft_strcat(char *dest, const char *src)
{
    int index;
    int size;
    
    size = str_length(dest);
    index = 0;
    while (src[index++])
        dest[size++] = src[index];
    return (dest);
}
   
