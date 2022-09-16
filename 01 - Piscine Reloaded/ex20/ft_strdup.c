/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djustino <djustino@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 01:48:21 by djustino          #+#    #+#             */
/*   Updated: 2022/08/31 02:22:36 by djustino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_strlen(char *str)
{
	int	loop;

	loop = 0;
	while (str[loop] != '\0')
		loop++;
	return (loop);
}

char	*ft_strdup(char *src)
{
	char	*dst;
	int		loop;

	dst = (char *) malloc(ft_strlen (src) + 1);
	if (dst == NULL)
		return (NULL);
	loop = 0;
	while (src[loop] != '\0')
	{
		dst[loop] = src[loop];
		loop++;
	}
	dst[loop] = '\0';
	return (dst);
}
