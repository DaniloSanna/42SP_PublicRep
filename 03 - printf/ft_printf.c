#include "ft_printf.h"

static	int	print_format(const char *fmt, int i, va_list args)
{
	int	size;

	size = 0;
	if (fmt[i] == 'c')
		size = ft_put_char(va_arg(args, int), 1);
	if (fmt[i] == 's')
		size = ft_put_string(va_arg(args, char *));
	if (fmt[i] == 'p')
		size = print_pointer(va_arg(args, unsigned long));
	if (fmt[i] == 'd' || fmt[i] == 'i')
		size = print_n(va_arg(args, int));
	if (fmt[i] == 'u')
		size = print_n_positive(va_arg(args, unsigned int));
	if (fmt[i] == 'x')
		size = converttohex(va_arg(args, unsigned int), 97);
	if (fmt[i] == 'X')
		size = converttohex(va_arg(args, unsigned int), 65);
	if (fmt[i] == '%')
		size = ft_put_char('%', 1);
	return (size);
}

static	int	make_print_buffer(const char *fmt, va_list args)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	while (fmt[i])
	{
		if (fmt[i] == '%')
		{
			size += print_format(fmt, i + 1, args);
			i++;
		}
		else
		{
			size += write(1, &fmt[i], 1);
		}
		i++;
	}
	return (size);
}

int	ft_printf(const char *fmt, ...)
{
	va_list	args;
	int		printed;

	va_start(args, fmt);
	printed = make_print_buffer(fmt, args);
	va_end(args);
	return (printed);
}
