
int     str_length(char *str)
{
    int length;
    int index = 0;
    
    length = 0;
    while (str[index++])
        length++;
    return (length);
}

char *ft_strncat(char *dest, const char *src, size_t n)
{
    int index;
    int size;
    
    size = str_length(dest);
    index = 0;
    while (index < n)
    {
        dest[size] = src[index];
        size++;
        index++;
    }
    return (dest);
}