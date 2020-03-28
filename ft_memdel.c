void ft_memdel(void **memry)
{
    if (memry == NULL)
        return ;
    free(*memry);
    *memry = NULL;
}
