/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crossart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 13:42:04 by crossart          #+#    #+#             */
/*   Updated: 2020/09/17 14:04:27 by crossart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	int a;
	int b;

	a = 78;
	b = 80;
	if (n < 0)
	{
		write(1, &a, 1);
	}
	else
	{
		write(1, &b, 1);
	}
}