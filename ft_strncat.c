
int     str_length(char *str)
{
    int i;
    
    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

char *ft_strncat(char *dest, const char *src, size_t n)
{
    int i;
    int j;
    
    j = str_length(dest);
    i = 0;
    while (i < n)
    {
        dest[j] = src[i];
        j++;
        i++;
    }
    dest[j] = '\0';
    return (dest);
}
