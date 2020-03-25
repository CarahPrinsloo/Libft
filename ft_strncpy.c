
char *ft_strncpy(char *dest, const char *src, size_t n) 
{
    int index;
    
    index = 0;
    while (index < (int) n)
    {
        dest[index] = src[index];
        index++;
    }
    return (dest);
}
