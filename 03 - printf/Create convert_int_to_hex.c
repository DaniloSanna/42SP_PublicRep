#include "ft_printf.h"

int	converttohex(unsigned int input, int ulcase)
{
	int	retur;

	retur = 0;
	if ((input / 16) > 9)
		retur = converttohex((input / 16), ulcase);
	else if ((input / 16) != 0)
		retur += ft_put_char((input / 16) + '0', 1);
	if ((input % 16) <= 9)
		retur += ft_put_char((input % 16) + '0', 1);
	else
		retur += ft_put_char(ulcase + ((input % 16) - 10), 1);
	return (retur);
}
