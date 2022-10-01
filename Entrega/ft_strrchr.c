/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djustino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 19:43:14 by djustino          #+#    #+#             */
/*   Updated: 2022/09/28 19:43:16 by djustino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *input, int searched)
{
	int	loop;

	loop = ft_strlen(input);
	if (input[loop] == '\0' && searched == '\0')
		return ((char *)input + loop);
	while (loop >= 0)
	{
		if (input[loop] == (unsigned char)searched)
			return ((char *)input + loop);
		loop--;
	}
	return (NULL);
}
