/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djustino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 19:33:40 by djustino          #+#    #+#             */
/*   Updated: 2022/09/28 19:33:42 by djustino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *cleaned, size_t limit)
{
	ft_memset(cleaned, '\0', limit);
}

// This function clear the array data, setting them to \0, doing this tru
// memset function.