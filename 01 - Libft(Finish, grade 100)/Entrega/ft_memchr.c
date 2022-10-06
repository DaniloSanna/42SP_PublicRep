/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djustino <djustino@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 19:38:45 by djustino          #+#    #+#             */
/*   Updated: 2022/10/01 21:15:32 by djustino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *input, int searched, size_t limit)
{
	int	i;

	i = 0;
	while (limit)
	{
		if (((unsigned char *)input)[i] == (unsigned char) searched)
			return (&((void *)((unsigned char *)input))[i]);
		i++;
		limit--;
	}
	return (NULL);
}
// This Function check n elements from input, looking for searched, once finded
// return this position
