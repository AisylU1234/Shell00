/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crossart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 10:51:41 by crossart          #+#    #+#             */
/*   Updated: 2020/09/29 12:30:52 by crossart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_display(int f)
{
	int		i;
	char	*a[512];

    while (1)
    {
        i = read(f, a, 512);
        if (i)
            write(1, a, i);
        else
            break ;
    }
}

int		main(int argc, char *argv[])
{
	int f;

	if (argc < 2)
	{
		write(1, "File name missing.\n", 20);
		return (1);
	}
	else if (argc > 2)
	{
		write(1, "Too many arguments.\n", 20);
		return (1);
	}
	f = open(argv[1], O_RDONLY);
	if (f < 0)
	{
		write(1, "Cannot read file.\n", 20);
		return (1);
	}
	else
		ft_display(f);
	return (0);
}
