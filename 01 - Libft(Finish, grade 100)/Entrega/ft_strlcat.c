/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djustino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 19:29:46 by djustino          #+#    #+#             */
/*   Updated: 2022/09/28 19:29:49 by djustino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *destination, const char *source,
					size_t destinationstart)
{
	size_t	destination_size;
	size_t	loop;

	destination_size = ft_strlen(destination);
	loop = 0;
	if (destinationstart == 0)
		return (ft_strlen(source));
	if (destinationstart < (destination_size + 1))
		return (ft_strlen(source) + destinationstart);
	if (destinationstart >= destination_size + 1)
	{
		while (source[loop] != '\0' && ((destinationstart - 1)
				> (destination_size + loop)))
		{
			destination[destination_size + loop] = source[loop];
			loop++;
		}
	}
	destination[destination_size + loop] = '\0';
	return (ft_strlen(source) + destination_size);
}
