/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djustino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 19:40:36 by djustino          #+#    #+#             */
/*   Updated: 2022/09/28 19:40:37 by djustino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *input, int messagetype)
{
	int	loop;

	loop = 0;
	while (input[loop] != '\0')
	{
		ft_putchar_fd(input[loop], messagetype);
		loop++;
	}
}

//Print a array using write tru ft_putchar_fd.
