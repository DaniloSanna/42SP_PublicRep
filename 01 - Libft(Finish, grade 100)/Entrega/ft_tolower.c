/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djustino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 19:43:43 by djustino          #+#    #+#             */
/*   Updated: 2022/09/28 19:43:45 by djustino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int input)
{
	if (input >= 'A' && input <= 'Z')
		input += 32;
	return (input);
}

// this function change the luppercase letter to lowercase