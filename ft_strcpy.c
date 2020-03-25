/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

int     str_length(char *str)
{
    int length;
    int index = 0;
    
    length = 0;
    while (str[index++])
        length++;
    return (length);
}

void    clear(char *str)
{
    int i;
    
    i = str_length(str);
    while (i >= 0)
    {
        str[i] = NULL;
        i--;
    }
}

char *ft_strcpy(char *dest, const char *src)
{
    int index;
    int size;
    
    size = str_length(dest);
    index = 0;
    if (size > 0)
        clear(dest);
    while (src[index])
    {
        dest[index] = src[index];
        index++;
    }
    return (dest);
}