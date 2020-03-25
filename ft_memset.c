
void    *ft_memset(void *ptr, int x, size_t n)
{
    unsigned char *dest;
    
    dest = ptr;
    while(n > 0)
    {
      *dest = x;
      dest++;
      n--;
    }
    return (ptr);
}