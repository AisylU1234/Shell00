/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crossart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 09:26:40 by crossart          #+#    #+#             */
/*   Updated: 2020/09/25 11:53:44 by crossart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(char *src)
{
	int i;
	char *a;
	char *b;

	i = 0;
	while (*src != '\n')
		i++;
	a = ((char *)malloc((size_t)i + 1));
	if (!a)
		return (a);
	b = a;
	while ((*a++ = *b++));
	return (b);
}
int main()
{
	char *a = "sdvvsd";
	char *b;
	b = ft_strdup(a);
	printf("%s", b);
	return (0);
}
