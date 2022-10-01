/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djustino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 19:38:56 by djustino          #+#    #+#             */
/*   Updated: 2022/09/28 19:38:58 by djustino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t limit)
{
	const unsigned char	*castone;
	const unsigned char	*casttwo;
	size_t				loop;

	castone = s1;
	casttwo = s2;
	loop = 0;
	if (limit == 0)
		return (0);
	while (loop < limit)
	{
		if (castone[loop] != casttwo[loop])
			return (castone[loop] - casttwo[loop]);
		loop++;
	}
	return (0);
}
