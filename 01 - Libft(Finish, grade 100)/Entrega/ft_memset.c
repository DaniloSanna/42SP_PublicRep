/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djustino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 19:39:36 by djustino          #+#    #+#             */
/*   Updated: 2022/09/28 19:39:38 by djustino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *startposition, int replacevalue, size_t endposition)
{
	unsigned char	*casting;
	size_t			loop;

	casting = startposition;
	loop = -1;
	while (++loop < endposition)
		casting[loop] = replacevalue;
	return (casting);
}

// This function fill the array with same element, starting by startposition
// till endposition.