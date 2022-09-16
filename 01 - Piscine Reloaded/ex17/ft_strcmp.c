/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djustino <djustino@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 01:33:12 by djustino          #+#    #+#             */
/*   Updated: 2022/08/30 01:34:01 by djustino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	loop;

	loop = 0;
	while (s1[loop] != '\0')
	{
		if (s1[loop] == s2[loop])
			loop++;
		else
			return (s1[loop] - s2[loop]);
	}
	return (*s1 - *s2);
}
