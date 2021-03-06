/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crossart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 19:52:26 by crossart          #+#    #+#             */
/*   Updated: 2020/09/23 16:23:03 by crossart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;

	i = 0;
	if (nb >= 0)
	{
		i++;
		while (nb > 0)
		{
			i = i * nb;
			nb--;
		}
	}
	return (i);
}
