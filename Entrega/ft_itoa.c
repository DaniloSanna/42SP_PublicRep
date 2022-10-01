/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djustino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 19:38:10 by djustino          #+#    #+#             */
/*   Updated: 2022/09/28 19:38:11 by djustino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*retur_complete(char *retur, int decimal, long int number, int loop)
{
	while (decimal >= 1)
	{
		retur[loop] = '0' + ((int)(number / decimal));
		number = number - (number / decimal) * decimal;
		decimal = decimal / 10;
		loop++;
	}
	retur[loop] = '\0';
	return (retur);
}

char	*ft_itoa(int n)
{
	char		*retur;
	int			decimal;
	int			negative;
	int			loop;
	long int	number;

	negative = 0;
	decimal = 1;
	loop = 1;
	number = n;
	if (number < 0)
	{
		negative = 1;
		number = number * -1;
	}
	while (decimal <= number / 10)
	{
		decimal = decimal * 10;
		loop++;
	}
	retur = (char *) malloc(sizeof(char) * (loop + negative + 1));
	if (negative == 1)
		retur[0] = '-';
	retur_complete(retur, decimal, number, negative);
	return (retur);
}
