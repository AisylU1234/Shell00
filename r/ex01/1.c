/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iranda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 18:03:10 by iranda            #+#    #+#             */
/*   Updated: 2020/10/03 13:08:44 by iranda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	ft_error(int argc)
{
	if (argc < 2)
	{
		write(1, "File name missing.\n", 20);
		return (0);
	}
	else
	{
		write(1, "Too many arguments.\n", 21);
		return (0);
	}
}

int	ft_do(char *num)
{
	int		fd;
	int		ret;
	char	buf[10000];
	int		i;
    int     r = 0;
    int     len = 0;
    char    m = 0;

	i = 0;
	ret = 0;
	fd = open("1.txt", O_RDONLY);
	if (fd == -1)
	{
		write(1, "Cannot read file.\n", 19);
		return (0);
	}
	ret = read(fd, buf, 10000);
	buf[ret] = '\0';
    while(num[len] != '\0')
    {
        len++;
    }
    char a = 0;
    if(len == 3)
    {
        m = num[0];
        num[0] = 48;
    }
    if (num[len-1] != '0' && num[len-2] != '1' && num[len-2] != '0')
    {
        a = num[len - 1];
        num[len-1] = 48;
    }
    if (m != 0)
    {
        while (buf[r+1] != '\0')
        {
            if(buf[r] == m && buf[r+1] == ':'&& buf[r-1] == '\n')
            {
                
                while(!(buf[r] >= 97 && buf[r] <= 122))
                {
                    r++;
                }
                while(buf[r] != '\n')
                {
                    write(1,&buf[r],1);
                    r++;
                }
                
            }
            r++;
        }
        write(1," hundred ",10);

    }
    r = 0;
   if (len > 1)
    {
        while (buf[r+1] != '\0')
        {
            if(buf[r] == num[len-2] && buf[r+1] == '0'&& buf[r-1] == '\n')
            {
                
                while(!(buf[r] >= 97 && buf[r] <= 122))
                {
                    r++;
                }
                while(buf[r] != '\n')
                {
                    write(1,&buf[r],1);
                    r++;
                }
                
            }
            r++;
        }
    }
    write(1," ",1);
    r = 0;
   if (a != 0)
   {
       while (buf[r+1] != '\0')
       {
           if(buf[r] == a && buf[r+1] == ':'&& buf[r-1] == '\n')
           {
               
               while(!(buf[r] >= 97 && buf[r] <= 122))
               {
                   r++;
               }
               while(buf[r] != '\n')
               {
                   write(1,&buf[r],1);
                   r++;
               }
               
           }
           r++;
       }
   }
    write(1,"\n",1);
	//close("1.txt");
	return (0);
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		ft_do(argv[1]);
	}
	else
	{
		ft_error(argc);
	}
	return (0);
}
