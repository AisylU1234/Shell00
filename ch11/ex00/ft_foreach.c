/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crossart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 12:32:16 by crossart          #+#    #+#             */
/*   Updated: 2020/09/29 17:06:53 by crossart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_foreach(int *tab, int length, void(*f)(int))
{
	int i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
void ft_putnbr(int n)
{
	printf("%d", n);
}
void ft_put(int n)
{
	printf("%d + ", n);
}

int main()
{
	int tab[] = {1, 2, 3, 4, 5, 6};
	ft_foreach(tab, 6, &ft_putnbr);
    ft_foreach(tab, 6, &ft_put);
}
