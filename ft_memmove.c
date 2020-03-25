
void ft_memmove(void *dest, void *src, size_t n)
{
    unsigned char *dst;
    unsigned char *word;
    char tmp[n];
    int i;
    
    dst = (char*) dest;
    word = (char*) src;
    i = 0;
    while (i < n)
    {
        tmp[i] = word[i];
        i++;
    }
    i = 0;
    while (n > 0)
    {
        *dst = tmp[i];
        dst++;
        i++;
        n--;
    }
}