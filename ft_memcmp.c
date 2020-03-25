
int ft_memcmp(const void *str1, const void *str2, size_t n)
{
    unsigned char *cstr1;
    unsigned char *cstr2;
    
    cstr1 = (char *) str1;
    cstr2 = (char *) str2;
    while (n > 0)
    {
        if(*cstr1 != *cstr2)
            return (cstr1 - cstr2);
        cstr1++;
        cstr2++;
        n--;
    }
    return (0);
}