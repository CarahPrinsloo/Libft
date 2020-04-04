size_t        ft_strlcat(char *dest, const char *src, size_t size)
{
    int start;
    int end;
    int count;
    
    start = 0;
    count = 0;
    while( (dest[start] != '\0') && (start < size) )
      start++;
    end = size - start - 1;
    while (end > 0)
    {
        dest[start] = src[count];
        end--;
        start++;
        count++;
    }
    dest[start] = '\0';
    return (start + 1);
}