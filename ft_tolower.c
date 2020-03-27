int		ft_tolower(int letter)
{
	if ((letter >= 'A' && letter <= 'Z'))
	{
		return (letter + 32);
	}
	else
		return (letter);
}
