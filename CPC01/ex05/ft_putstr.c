#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;
	char sym;
	
	i = 0;
	while (1)
	{
		sym = *(str + i);
			if (sym == '\0') 
			{
			break;
			}
		write(1, $sym, 1);
		i = i + 1;
	}
}
int main()
{
	char str[5];
	str[0] = '1';
	str[1] = '2';
	str[2] = '3';
	str[3] = '4';
	str[4] = '5';
	ft_putstr(str);
}
