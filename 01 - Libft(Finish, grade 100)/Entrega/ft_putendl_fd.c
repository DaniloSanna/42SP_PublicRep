/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djustino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 19:29:14 by djustino          #+#    #+#             */
/*   Updated: 2022/09/28 19:29:26 by djustino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *input, int messagetype)
{
	ft_putstr_fd(input, messagetype);
	write(messagetype, "\n", 1);
}

//Print a array using write tru ft_putstr_fd and add a new line;
