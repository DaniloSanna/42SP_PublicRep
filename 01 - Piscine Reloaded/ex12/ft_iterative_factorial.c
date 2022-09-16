/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djustino <djustino@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 01:29:22 by djustino          #+#    #+#             */
/*   Updated: 2022/08/30 01:30:22 by djustino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = nb - 1;
	if (nb == 1 || nb == 0)
		return (1);
	if (nb >= 13 || nb < 0)
		return (0);
	while (result > 1)
	{
		nb = nb * result;
		result--;
	}
	return (nb);
}
