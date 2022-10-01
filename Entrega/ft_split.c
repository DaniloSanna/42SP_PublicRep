/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djustino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 19:40:50 by djustino          #+#    #+#             */
/*   Updated: 2022/09/28 19:40:51 by djustino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wordcount(char const *input, char searched)
{
	int	wordamount;
	int	loop;

	wordamount = 0;
	loop = 0;
	if (!input)
		return (0);
	while (input[loop])
	{
		if (loop == 0 && input[loop] == searched)
			loop++;
		if (input[loop] != searched && input[loop + 1] == searched)
			wordamount++;
		if (input[loop] != searched && input[loop + 1] == '\0')
			wordamount++;
		loop++;
	}
	return (wordamount);
}

char	**ft_split(char const *input, char searched)
{
	int		wordstart;
	int		loop;
	int		lineretur;
	char	**retur;

	loop = 0;
	wordstart = 0;
	lineretur = 0;
	retur = (char **) malloc (sizeof(char *)
			* (wordcount(input, searched) + 1));
	while (input[loop] && retur != NULL)
	{
		while (input[loop] == searched)
			loop++;
		wordstart = loop;
		while (input[loop] && input[loop] != searched)
			loop++;
		if (loop > wordstart)
		{
			retur[lineretur] = ft_substr(input, wordstart, loop - wordstart);
			lineretur++;
		}
	}
	retur[lineretur] = NULL;
	return (retur);
}
