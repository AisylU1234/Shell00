/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crossart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 15:45:11 by crossart          #+#    #+#             */
/*   Updated: 2020/09/29 16:42:27 by crossart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		i;
	int		*a;

	a = (int*)malloc(length * sizeof(int));
	i = 0;
	while (i < length)
	{
		a[i] = f(tab[i]);
		i++;
	}
	return (a);
}
