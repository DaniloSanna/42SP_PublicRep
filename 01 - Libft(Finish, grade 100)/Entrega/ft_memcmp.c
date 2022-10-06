/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djustino <djustino@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 19:38:56 by djustino          #+#    #+#             */
/*   Updated: 2022/10/01 21:20:02 by djustino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *array1, const void *array2, size_t limit)
{
	const unsigned char	*castone;
	const unsigned char	*casttwo;
	size_t				loop;

	castone = array1;
	casttwo = array2;
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
// This function compare one string to another untill limit,
// and return its difference.
