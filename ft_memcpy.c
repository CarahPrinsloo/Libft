
void *ft_memcpy(void *to, const void *from, size_t numBytes)
{
    unsigned char *dest;
    unsigned char *word;
    
    dest = (char*) to;
    word = (char*) from;
    while (numBytes > 0)
    {
        *dest = *word;
        dest++;
        word++;
        numBytes--;
    }
    return (to);
}