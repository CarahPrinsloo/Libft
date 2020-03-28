int     ft_isalpha(int test)
{
    if ((test > 64 && test < 91) || (test > 96 && test < 123))
        return (1);
    return (0);
}
