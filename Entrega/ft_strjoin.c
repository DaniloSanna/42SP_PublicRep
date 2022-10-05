/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djustino <djustino@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 19:41:41 by djustino          #+#    #+#             */
/*   Updated: 2022/10/01 21:09:36 by djustino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *array1, char const *array2)
{
	char	*retur;
	size_t	size;

	size = 1 + (ft_strlen(array1) + ft_strlen(array2));
	retur = (char *) ft_calloc(1, size);
	if (retur == NULL)
		return (NULL);
	ft_strlcpy(retur, (char *)array1, size);
	ft_strlcat(retur, array2, size);
	return (retur);
}
// This function alocs and return a new string with the sum size of arrays
