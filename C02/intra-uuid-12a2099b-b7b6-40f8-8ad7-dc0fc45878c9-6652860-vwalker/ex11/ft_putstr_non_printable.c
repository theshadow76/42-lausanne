/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_putstr_non_printable.c                           :+:    :+:           */
/*                                                      +:+                   */
/*   By: vwalker <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2025/06/29 19:06:57 by vwalker        #+#    #+#                */
/*   Updated: 2025/06/29 19:10:30 by vwalker        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_dtohexa(char c)
{
	int	f;

	f = c / 16;
	ft_putchar(f + '0');
	if (f == 0)
	{
		if (c < 10)
			ft_putchar(c + 0);
		else
			ft_putchar(c + 87);
	}
	else
		ft_dtohexa(c % 16);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			ft_putchar('\\');
			ft_dtohexa(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
