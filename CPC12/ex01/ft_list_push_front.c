/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crossart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 16:20:36 by crossart          #+#    #+#             */
/*   Updated: 2020/10/01 16:31:01 by crossart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_create_elem"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *lst;

	lst = ft_create_elem(data);
	lst->next = *begin_list;
	*begin_list = lst;
}
