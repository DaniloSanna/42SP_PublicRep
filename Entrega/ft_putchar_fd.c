/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djustino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 19:39:49 by djustino          #+#    #+#             */
/*   Updated: 2022/09/28 19:39:50 by djustino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char input, int messagetype)
{
	write(messagetype, &input, 1);
}
// to messagetype can use 0, 1, or 2, to refer to standard input,
// standard output, or standard error, respectively.
// Or can either use a file descriptor obtained from the open system call.
