/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crossart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 15:45:11 by crossart          #+#    #+#             */
/*   Updated: 2020/09/29 16:41:08 by crossart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
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

int ft_plus(int n)
{
	return(n + 1);
}
int main()
{
	int i = 0;
	int tab[] = {1, 2, 3, 4, 5, 6};
	int *ptr;
	ptr = ft_map(tab, 6, ft_plus);
	while (i < 6)
	{
		printf("%d", ptr[i]);
		i++;
	}
	free(ptr);
}
