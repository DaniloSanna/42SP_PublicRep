/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djustino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 19:42:11 by djustino          #+#    #+#             */
/*   Updated: 2022/09/28 19:42:13 by djustino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	loop;

	loop = 0;
	if (size)
	{
		while (src[loop] != '\0' && loop < (size - 1))
		{
			dest[loop] = src[loop];
			loop++;
		}
		dest[loop] = '\0';
	}
	return (ft_strlen(src));
}
