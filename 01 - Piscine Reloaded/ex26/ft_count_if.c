/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djustino <djustino@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 01:59:33 by djustino          #+#    #+#             */
/*   Updated: 2022/08/30 23:55:55 by djustino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f) (char*))
{
	int	loop1;
	int	loop2;

	loop1 = 0;
	loop2 = loop1;
	while (tab[loop1])
		if (f(tab[loop1++]) == 1)
			loop2++;
	return (loop2);
}
