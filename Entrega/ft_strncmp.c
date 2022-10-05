/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djustino <djustino@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 19:42:42 by djustino          #+#    #+#             */
/*   Updated: 2022/10/01 21:13:52 by djustino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *array1, const char *array2, size_t limit)
{
	size_t	loop;

	loop = 0;
	while (loop < limit)
	{
		if (array1[loop] - array2[loop] == 0)
			loop++;
		else
			return ((unsigned char)array1[loop] - (unsigned char)array2[loop]);
	}
	return (0);
}
// This function compare both arrays and return the diference of letters.
