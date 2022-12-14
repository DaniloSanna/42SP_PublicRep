#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# ifdef __APPLE__
#  define OSNULL "0x0"
#  define NUMBER 3
# else
#  define OSNULL "(nil)"
#  define NUMBER 5
# endif

# include<stdarg.h>
# include<unistd.h>
# include<stdlib.h>

//Printf
//static	int	print_format(const char *fmt, int i, va_list args);
//static	int	make_print_buffer(const char *fmt, va_list args);
int			ft_printf(const char *fmt, ...);

//letters and word types
int			ft_put_char(char input, int fd_fildes);
int			ft_put_string(char *input);

//hexadecimal types
int			converttohex(unsigned int input, int ulcase);
int			converttohex_pointer(unsigned long long input);
int			print_pointer(unsigned long long input);

//integer types
int			print_n(int input);
int			print_n_positive(unsigned int input);

#endif
