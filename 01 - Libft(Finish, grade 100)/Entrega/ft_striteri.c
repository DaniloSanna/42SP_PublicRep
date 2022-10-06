/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djustino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 19:41:31 by djustino          #+#    #+#             */
/*   Updated: 2022/09/28 19:41:32 by djustino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *input, void (*f)(unsigned int, char*))
{
	int	loop;

	loop = -1;
	while (input[++loop])
		f(loop, &input[loop]);
	input[loop] = '\0';
}
// Execute the F function in loop, by each input value/size
