/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calculator.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crossart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 17:40:15 by crossart          #+#    #+#             */
/*   Updated: 2020/09/30 18:06:28 by crossart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_swap(char *str)
{
	int s;
	int si;

	s = 0;
	si = 1;
	if (*str == '-')
		{
			si = si * (-1);
			str++;
		}
	if (*str >= '0' || *str <= '9')
	{
		s = s * 10 + (*str - '0');
		str++;
	}
	return (s * si);
}	


int ft_calculator(char )
{
	
}

int		main(int argc, char **argv)
{
	int		i;

	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putstr("\n");
		i++;
	}
	return (0);
}
