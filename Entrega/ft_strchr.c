/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djustino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 19:41:06 by djustino          #+#    #+#             */
/*   Updated: 2022/09/28 19:41:08 by djustino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *input, int searched)
{
	size_t	loop;

	loop = 0;
	while (input[loop] != '\0')
	{
		if (input[loop] == (char) searched)
			return ((char *)input + loop);
		loop++;
	}
	if ((char) searched == '\0' && input[loop] == '\0')
		return ((char *)input + loop);
	return (NULL);
}

// this function look for a element and return its position.