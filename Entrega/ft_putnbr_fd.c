/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djustino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 19:40:18 by djustino          #+#    #+#             */
/*   Updated: 2022/09/28 19:40:20 by djustino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int input, int messagetype)
{
	if (input == -2147483648)
	{
		ft_putstr_fd("-2147483648", messagetype);
		return ;
	}
	if (input < 0 && input != -2147483648)
	{
		ft_putchar_fd('-', messagetype);
		input *= -1;
	}
	if (input > 9)
	{
		ft_putnbr_fd(input / 10, messagetype);
		ft_putnbr_fd(input % 10, messagetype);
	}
	else
		ft_putchar_fd(input + '0', messagetype);
}

//Print a number using write tru ft_putstr_fd and ft_putchar_fd.
