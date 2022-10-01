/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djustino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 19:33:53 by djustino          #+#    #+#             */
/*   Updated: 2022/09/28 19:33:54 by djustino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t mensizeone, size_t mensizetwo)
{
	void	*newarray;
	size_t	limit;

	limit = 2147483647;
	if (mensizeone == 0)
		return (NULL);
	if (mensizeone > limit || mensizetwo > limit
		|| (mensizetwo * mensizeone) > limit)
		return (NULL);
	newarray = malloc ((size_t)(mensizetwo) * (size_t)(mensizeone));
	if (newarray == NULL)
		return (NULL);
	ft_bzero(newarray, (size_t)(mensizetwo) * (size_t)(mensizeone));
	return (newarray);
}
