/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djustino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 19:36:36 by djustino          #+#    #+#             */
/*   Updated: 2022/09/28 19:36:38 by djustino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int input)
{
	if ((input >= '0' && input <= '9') || (input >= 'A' && input <= 'Z')
		|| (input >= 'a' && input <= 'z'))
		return (1);
	return (0);
}
