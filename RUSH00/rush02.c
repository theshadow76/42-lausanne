/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   rush02.c                                            :+:    :+:           */
/*                                                      +:+                   */
/*   By: tzanetti <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2025/06/28 09:59:06 by tzanetti       #+#    #+#                */
/*   Updated: 2025/06/28 12:43:43 by vwalker        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < y)
	{
		if (j == 0)
		{
			while (i <= x)
			{
				if (i == 0)
				{
					ft_putchar('A');
				}
				else if (i == x-1)
				{
					ft_putchar('A');
					ft_putchar('\n');
				}
				else
				{
					ft_putchar('B');
				}
				i++;
			}
			i = 0;
		}
		else if (j == y-1)
		{
			while (i < x)
			{
				if (i == 0 )
				{
					ft_putchar('C');
				}
				else if (i == x-1)
				{
					ft_putchar('C');
					ft_putchar('\n');
				}
				else
				{
					ft_putchar('B');
				}
				i++;
			}
			i = 0;		
		}
		else
		{	
			while (i <= x-1)
			{
				if (i == 0)
				{
					ft_putchar('B');
				}
				else if (i == x-1)
				{
					ft_putchar('B');
					ft_putchar('\n');
				}
				else
				{
					ft_putchar(' ');
				}
				i++;
			}
			i = 0;
		}
		j++;

	}
	
}

int	main(void)
{
	rush(5, 5);
	return (0);
}
