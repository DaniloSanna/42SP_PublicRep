/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djustino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 19:39:25 by djustino          #+#    #+#             */
/*   Updated: 2022/09/28 19:39:26 by djustino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, const void *origin, size_t limit)
{
	size_t	loop;

	loop = -1;
	if ((!destination && !origin) || !limit)
		return (destination);
	if (destination == origin)
		return ((void *)origin);
	if (destination < origin)
	{
		while (++loop < limit)
			((unsigned char *)destination)[loop]
				= ((unsigned char *) origin)[loop];
	}
	if (destination > origin)
	{
		loop = limit;
		while (loop > 0)
		{
			((unsigned char *)destination)[loop - 1]
				= ((unsigned char *)origin)[loop - 1];
			loop--;
		}
	}
	return (destination);
}

// This function copy, n amount of bytes, from source/origin to src/destination 
// But we have 1 issue, source come before destination, to resolve that we
// start coping by end of array.
