/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djustino <djustino@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 01:32:01 by djustino          #+#    #+#             */
/*   Updated: 2022/08/31 01:20:56 by djustino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char str);

void	ft_putstr(char *str)
{
	int	loop;

	loop = 0;
	while (str[loop] != '\0')
		ft_putchar (str[loop++]);
}
