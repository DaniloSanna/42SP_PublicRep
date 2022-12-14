#include "ft_printf.h"

int	converttohex_pointer(unsigned long long input)
{
	int	retur;

	retur = 0;
	if ((input / 16) > 9)
		retur = converttohex_pointer(input / 16);
	else if ((input / 16) != 0)
		retur += ft_put_char((input / 16) + '0', 1);
	if ((input % 16) <= 9)
		retur += ft_put_char((input % 16) + '0', 1);
	else
		retur += ft_put_char('a' + ((input % 16) - 10), 1);
	return (retur);
}

int	print_pointer(unsigned long long input)
{
	int	retur;

	retur = 0;
	if (!input)
		return (write(1, OSNULL, NUMBER));
	retur += write(1, "0x", 2);
	retur += converttohex_pointer(input);
	return (retur);
}
