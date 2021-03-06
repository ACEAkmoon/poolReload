/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 21:25:17 by akrushin          #+#    #+#             */
/*   Updated: 2017/12/05 21:25:20 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int q;

	q = 1;
	if (nb <= 0)
		return (0);
	while (q < 46342)
	{
		if ((q * q) == nb)
			return (q);
		q++;
	}
	return (0);
}
