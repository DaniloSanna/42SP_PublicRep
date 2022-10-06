/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djustino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 19:33:06 by djustino          #+#    #+#             */
/*   Updated: 2022/09/28 19:33:12 by djustino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *input)
{
	int	loop;
	int	less;
	int	number;

	loop = 0;
	less = 1;
	number = 0;
	if (!input[loop])
		return (0);
	while (input[loop] == 32 || (input[loop] >= 9 && input[loop] <= 13))
		loop++;
	if (input[loop] == '+' || input[loop] == '-')
	{
		if (input[loop] == '-')
			less *= -1;
		loop++;
	}
	while (input[loop] >= 48 && input[loop] <= 57)
	{
		number = (number * 10) + (input[loop] - 48);
		loop++;
	}
	return (number * less);
}

// this function convert a array into a int, then return it.
// the first while check if is any type of acceptable 
// 'slash' and space to advance array;