
void *ft_memcpy(void *to, const void *from, size_t numBytes)
{
    unsigned char *dest;
    unsigned char *word;
    
    if (numBytes == 0)
        return (to);
    dest = (char*) to;
    word = (char*) from;
    if (numBytes == 0)
        return (dst);
    while (numBytes > 0)
    {
        *dest = *word;
        dest++;
        word++;
        numBytes--;
    }
    return (to);
}
