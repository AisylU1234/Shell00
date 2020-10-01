/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crossart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 13:59:43 by crossart          #+#    #+#             */
/*   Updated: 2020/09/30 16:02:26 by crossart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_count_if(char **tab, int length, int(*f)(char*))
{
	int i;

	i = 0;
	while (length > 0)
	{
		if(f(*tab) != 0)
		{
			i++;
		}
		tab++;
		length--;
	}
	return (i);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

int main()
{
    char* tab[3] = {"4", "f"};
	printf("%d", ft_count_if(tab, 3, &ft_strlen));
}
