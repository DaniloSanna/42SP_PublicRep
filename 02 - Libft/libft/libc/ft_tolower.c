int	ft_tolower(int input)
{
	if (input >= 'A' && input <= 'Z')
		return (input + 32);
	return (0);
}
