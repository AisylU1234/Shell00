/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crossart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 17:17:49 by crossart          #+#    #+#             */
/*   Updated: 2020/09/23 19:20:19 by crossart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_not_prime(int nb)
{
	int i;
	int k;

	k = 1;
	i = nb - 1;
	if (nb == 1 || nb <= 0)
		return (1);
	else
	{
		while (i > 1)
		{
			if (nb % i == 0)
				k = 0;
			i--;
		}
		if (k)
			return (0);
		else
			return (1);
	}
}

int		ft_find_next_prime(int nb)
{
	while (ft_is_not_prime(nb))
	{
		nb++;
	}
	return (nb);
}
