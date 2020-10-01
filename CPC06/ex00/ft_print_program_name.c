/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crossart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 10:26:26 by crossart          #+#    #+#             */
/*   Updated: 2020/09/24 13:19:11 by crossart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int		i;
	char	sym;

	i = 0;
	while (1)
	{
		sym = *(str + i);
		if (sym != '\0')
		{
			write(1, &sym, 1);
			i++;
		}
		else
			break ;
	}
}

int		main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	ft_putstr(argv[0]);
	return (0);
}
