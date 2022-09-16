/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djustino <djustino@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 01:49:57 by djustino          #+#    #+#             */
/*   Updated: 2022/08/31 02:36:12 by djustino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int		*r;
	int		loop;

	if (min >= max)
		return (0);
	r = (int *) malloc((max - min) * sizeof (int));
	loop = 0;
	while ((min + loop) < max)
	{
		r[loop] = (min + loop);
		loop++;
	}
	return (r);
}
