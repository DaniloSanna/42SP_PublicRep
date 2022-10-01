/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djustino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 19:41:19 by djustino          #+#    #+#             */
/*   Updated: 2022/09/28 19:41:21 by djustino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *input)
{
	char	*duplication;
	size_t	size;

	size = 1 + ft_strlen(input);
	duplication = malloc(size);
	if (duplication)
		ft_strlcpy(duplication, (char *)input, size);
	else
		return (NULL);
	return (duplication);
}
