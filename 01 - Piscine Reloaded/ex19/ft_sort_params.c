/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djustino <djustino@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 01:36:18 by djustino          #+#    #+#             */
/*   Updated: 2022/08/31 02:23:47 by djustino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_var
{
	int		bs1;
	int		bs2;
	int		ac;
	int		l;
	char	*temp;
}	t_var;

void	ft_putchar(char c);

void	order(int argc, char **argv)
{
	t_var	stru;

	stru.bs1 = 1;
	while (stru.bs1 < argc - 1)
	{
		stru.bs2 = 0;
		stru.ac = 1;
		while (stru.bs2 < argc - 1)
		{
			stru.l = 0;
			while (argv[stru.ac] && argv[stru.ac + 1] && \
			argv[stru.ac][stru.l] == argv[stru.ac + 1][stru.l])
			stru.l++;
			if (argv[stru.ac] && argv[stru.ac + 1] && \
			argv[stru.ac][stru.l] > argv[stru.ac + 1][stru.l])
			{
				stru.temp = argv[stru.ac];
				argv[stru.ac] = argv[stru.ac + 1];
				argv[stru.ac + 1] = stru.temp;
			}
			stru.ac++;
			stru.bs2++;
		}
		stru.bs1++;
	}
}

int	main(int argc, char **argv)
{
	int	ac;
	int	i;

	order(argc, argv);
	if (argc > 1)
	{
		ac = 1;
		while (ac < argc)
		{
			i = 0;
			while (argv[ac][i])
			{
				ft_putchar(argv[ac][i]);
				i++;
			}
			ft_putchar('\n');
			ac++;
		}
	}
	return (0);
}
