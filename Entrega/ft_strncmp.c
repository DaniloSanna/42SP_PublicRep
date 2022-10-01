/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djustino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 19:42:42 by djustino          #+#    #+#             */
/*   Updated: 2022/09/28 19:42:42 by djustino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t limit)
{
	size_t	loop;

	loop = 0;
	while (loop < limit)
	{
		if (s1[loop] - s2[loop] == 0)
			loop++;
		else
			return ((unsigned char)s1[loop] - (unsigned char)s2[loop]);
	}
	return (0);
}
