/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crossart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 10:10:23 by crossart          #+#    #+#             */
/*   Updated: 2020/09/22 22:02:01 by crossart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_swap(char *str)
{
	int		sw;

	sw = 0;
	if (*str == ' ' || *str == '\0' || *str == '+')
		sw = 1;
	return (sw);
}

int		ft_atoi(char *str)
{
	int		s;
	int		si;
	int		b;

	b = 0;
	s = 0;
	si = 1;
	while (*str != '\0')
	{
		if (ft_swap(str))
			str++;
		else if (*str == '-')
		{
			si = si * (-1);
			str++;
		}
		else if (*str < '0' || *str > '9')
			return (s * si);
		else
		{
			s = s * 10 + (*str - '0');
			str++;
		}
	}
	return (s * si);
}
