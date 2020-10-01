/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crossart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 16:45:45 by crossart          #+#    #+#             */
/*   Updated: 2020/09/30 13:47:25 by crossart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int ft_any(char **tab, int(*f)(char*))
{
	while (*tab != '\0')
	{
		if(f(*tab) != 0)
		{
			return (1);
		}
		tab++;
	}
	return (0);
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
    char* tab[5] = {"4", "f"};
	printf("%d", ft_any(tab, &ft_strlen));
}
