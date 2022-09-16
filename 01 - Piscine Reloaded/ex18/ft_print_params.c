/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djustino <djustino@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 01:34:26 by djustino          #+#    #+#             */
/*   Updated: 2022/08/31 02:49:30 by djustino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char str);

void	ft_print_params(char *str)
{
	int	loop;

	loop = 0;
	while (str[loop] != '\0')
		ft_putchar (str[loop++]);
	ft_putchar ('\n');
}

int	main(int argc, char **argv)
{
	int	loop;

	loop = 1;
	if (argc > 1)
	{
		while (loop < argc)
			ft_print_params (argv[loop++]);
	}
	return (0);
}
