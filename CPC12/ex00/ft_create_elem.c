/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crossart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 09:32:48 by crossart          #+#    #+#             */
/*   Updated: 2020/10/01 16:48:15 by crossart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list		*ft_create_elem(void *data)
{
	t_list *l;

	l = malloc(sizeof(t_list));
	if (l != '\0')
	{
		l->data = data;
		l->next = NULL;
	}
	return (l);
}
