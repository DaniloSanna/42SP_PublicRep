#include "ft_printf.h"

int	ft_put_char(char input, int fd_fildes)
{
	return (write(fd_fildes, &input, 1));
}

int	ft_put_string(char *input)
{
	int	size;
	int	loop;

	loop = 0;
	size = 0;
	if (!input)
		return (write(1, "(null)", 6));
	while (input[loop] != '\0')
	{
		size += ft_put_char(input[loop], 1);
		loop++;
	}
	return (size);
}
