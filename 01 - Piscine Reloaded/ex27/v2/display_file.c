/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djustino <djustino@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 01:20:38 by djustino          #+#    #+#             */
/*   Updated: 2022/09/02 01:47:16 by djustino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<fcntl.h>
#include<unistd.h>

void	ft_display_file(char *inputfile)
{
	int		filed;
	char	letter;

	filed = open(inputfile, O_RDONLY);
	if (filed < 0)
		return ;
	while (read(filed, &letter, 1))
		write(1, &letter, 1);
	close(filed);
}

int	main(int argc, char *argv[])
{
	if (argc == 1)
		write(2, "File name missing.\n", 19);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else
		ft_display_file(argv[1]);
	return (0);
}
