/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crossart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 16:05:01 by crossart          #+#    #+#             */
/*   Updated: 2020/09/30 17:35:02 by crossart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	while (length > 0)
	{
		if (f(tab[length], tab[length - 1]) < 0)
			return (0);
		tab++;
		length--;
	}
	return (1);
}
int ft_srt(int n, int b)
{
	if (n < b)
		return (-1);
	else if (n == b)
		return (0);
	else
		return (1);
}
int main()
{
	int tab[] = {1, 2, 3, 4, 5, 6};
	printf("%d", ft_is_sort(tab, 6, &ft_srt));
}
