#include "ft_printf.h"

int	print_n(int input)
{
	int	size;

	size = 0;
	if (input == -2147483648)
	{
		size += write(1, "-2", 2);
		input += 2000000000;
		input *= -1;
	}
	if (input < 0)
	{
		size += write(1, "-", 1);
		input *= -1;
	}
	if (input < 10 && input >= 0)
	{
		size += ft_put_char(input + 48, 1);
		return (size);
	}
	else
	{
		size += print_n(input / 10);
		size += ft_put_char((input % 10) + 48, 1);
	}
	return (size);
}

int	print_n_positive(unsigned int input)
{
	int	size;

	size = 0;
	if (input < 10 && input >= 0)
	{
		size += ft_put_char(input + 48, 1);
		return (size);
	}
	else
	{
		size += print_n (input / 10);
		size += ft_put_char((input % 10) + 48, 1);
	}
	return (size);
}
