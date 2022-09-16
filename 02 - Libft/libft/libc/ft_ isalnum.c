int	ft_isalnum(int input)
{
	if ((input >= '0' && input <= '9') || (input >= 'A' && input <= 'Z')
		|| (input >= 'a' && input <= 'z'))
		return (1);
	return (0);
}
