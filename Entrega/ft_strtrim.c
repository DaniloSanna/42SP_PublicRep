/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djustino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 19:43:25 by djustino          #+#    #+#             */
/*   Updated: 2022/09/28 19:43:27 by djustino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *input, char const *removelist)
{
	size_t	endposition;

	if (input == NULL || removelist == NULL)
		return (NULL);
	while (*input && ft_strchr(removelist, *input))
		input++;
	endposition = ft_strlen(input);
	while (ft_strchr(removelist, input[endposition]) && endposition)
		endposition--;
	return (ft_substr((char *)input, 0, endposition + 1));
}
// This function remove from start and end of array one specify set of char.
// If input or removelis be null, then return NULL.
// After, while input exists and input letter finded in removelist
// advance the array untill input does not exist/match with removelist
// Now we have the begining.
// endposition receive the NEW SIZE of input, yes, once that we walt tru array
// the first position walk too.
// Do the same but in end of array, taking in considere that endposition should
// not get back, that means, if we do not take this in mind the array will walk
// back.
// By ending return a new string, observe thats this 0 means the start of array
// after the walking, this mean, the new/second start.