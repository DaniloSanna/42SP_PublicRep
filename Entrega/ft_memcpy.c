/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djustino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 19:39:08 by djustino          #+#    #+#             */
/*   Updated: 2022/09/28 19:39:10 by djustino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *origin, size_t n)
{
	size_t	loop;

	loop = 0;
	while (loop < n && destination && origin)
	{
		((unsigned char *)destination)[loop] = ((unsigned char *)origin)[loop];
		loop++;
	}
	return (destination);
}

// This function copy from memory/Array, n amount of byes, from source
//  to destination.