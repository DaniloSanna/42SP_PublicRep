/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djustino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 19:42:33 by djustino          #+#    #+#             */
/*   Updated: 2022/09/28 19:42:33 by djustino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *input, char (*f)(unsigned int, char))
{
	char	*retur;
	int		loop;

	loop = -1;
	retur = (char *) malloc (sizeof(char) * (ft_strlen(input) + 1));
	if (retur == NULL || input == NULL)
		return (NULL);
	while (input[++loop] != '\0')
		retur[loop] = f(loop, input[loop]);
	retur[loop] = '\0';
	return (retur);
}
// create a new array and this one receive as atribute the result 
// of function f(passed by user)
// this f function has as parametrer one unsigned int and a char
