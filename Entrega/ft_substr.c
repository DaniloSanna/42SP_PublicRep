/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djustino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 19:43:36 by djustino          #+#    #+#             */
/*   Updated: 2022/09/28 19:43:37 by djustino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *input, unsigned int start, size_t distance)
{
	unsigned int	i;
	char			*sb;

	if (input)
	{
		if (ft_strlen(input) < distance)
			distance = ft_strlen(input);
		sb = ft_calloc((distance + 1), sizeof(char));
		if (sb)
		{
			i = 0;
			if (start <= ft_strlen(input))
				while (input[start] && i < distance)
					sb[i++] = input[start++];
			return (sb);
		}
	}
	return (NULL);
}
