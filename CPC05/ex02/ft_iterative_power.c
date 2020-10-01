/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crossart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 20:44:17 by crossart          #+#    #+#             */
/*   Updated: 2020/09/22 21:02:29 by crossart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int n;

	n = 1;
	if (power == 0 && nb == 0)
		return (1);
	else if (power > 0)
	{
		while (power > 0)
		{
			n = n * nb;
			power--;
		}
		return (n);
	}
	else
		return (0);
}
