int		ft_toupper(int letter)
{
	if ((letter >= 'a' && letter <= 'z'))
	{
		return (letter - 32);
	}
	else
		return (letter);
}
