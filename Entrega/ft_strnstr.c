/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djustino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 19:43:03 by djustino          #+#    #+#             */
/*   Updated: 2022/09/28 19:43:04 by djustino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *origin, const char *searched, size_t limit)
{
	size_t		loop;
	size_t		point;

	loop = 0;
	point = 0;
	if (searched[0] == '\0')
		return ((char *)origin);
	while (origin[loop] != '\0' && point < limit)
	{
		point = 0;
		while (origin[loop + point] == searched[point]
			&& origin[loop + point] != '\0'
			&& loop + point < limit)
		{
			if (searched[point + 1] == '\0')
				return (&((char *)origin)[loop]);
			point++;
		}
		loop++;
	}
	return (NULL);
}
