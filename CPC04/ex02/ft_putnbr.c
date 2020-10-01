/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crossart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 13:25:01 by crossart          #+#    #+#             */
/*   Updated: 2020/09/21 17:24:11 by crossart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_putnbr(int nb)
{
	char	b[11];
	int		i;
	int		n;

	i = 0;
	if (nb == 0)
		write(1, "0", 1);
	if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	n = nb;
	while (n != 0)
	{
		n = n / 10;
		i = i + 1;
	}
	while (i-- >= 0)
	{
		b[i] = (nb % 10) + 48;
		nb = nb / 10;
	}
	ft_putstr(b);
}
