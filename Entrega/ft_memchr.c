/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djustino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 19:38:45 by djustino          #+#    #+#             */
/*   Updated: 2022/09/28 19:38:47 by djustino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *input, int searched, size_t limit)
{
	int				i;

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
