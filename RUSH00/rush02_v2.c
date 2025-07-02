/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   rush02_v2.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: vwalker <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2025/06/28 11:14:00 by vwalker        #+#    #+#                */
/*   Updated: 2025/06/28 12:44:29 by vwalker        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char str)
{
	write(1, &str, 1);
}
void	ft_putchar_y(char str, int y, int x_axe)
{
	int i = 0;
	int j = 0;
	while (i <= y)
	{
		if (i == 0)
                {
                        write(1, "\n", 1);
                        write(1, &str, 1);
			//write(1, "\n", 1);
                        i++;
                }
		else if (j <= x_axe)
		{
			while (j <= x_axe)
			{
				write(1, " ", 1);
				j++;
				//i++;
				if (j == x_axe)
				{
					//write(1, "\n", 1);
					i++;
				}
			}
		}
		else if (i == y) {
			write(1, &str, 1);
			i++;
		}
		else
		{
			//write(1, &str, 1);
			//write(1, "\n", 1);
			i++;
		}
	}
}
void	AxeMaker(int axe, int dash_n, int x_axe)
{
	char *A;
	char *B;
	int i;
	int counter;

	counter = 0;
	i = 0;
	

	if (dash_n == 1)
	{
		while (i <= axe)
                {
                        if (counter == 0)
                        {
                                ft_putchar_y('A', axe, x_axe);
                                i = i + 1;
                        }
                        while(counter != axe)
                        {
                                ft_putchar_y('B', axe, x_axe);
                                counter++;
                                i++;
                        }
                        if (counter == axe)
                        {
                                ft_putchar_y('C', axe, x_axe);
                                i = i + 1;
                                counter = counter + 1;
                        }
        	}
	}
	else
	{
		while (i <= axe)
                {
                        if (counter == 0)
                        {
                                ft_putchar('A');
                                i = i + 1;
                        }
                        while(counter != axe)
                        {
                                ft_putchar('B');
                                counter++;
                                i++;
                        }
                        if (counter == axe)
                        {
                                ft_putchar('C');
                                i = i + 1;
                                counter = counter + 1;
                        }
                }

	}
}

void	x_axe(int x, int y)
{
	int	i;
	int	counter;
	int	dash_n;

	dash_n = 0;
	i = 0;
	counter = 0;
	
	if (x != 0)
	{
		AxeMaker(x, dash_n, x);
	}
	if(y != 0)
	{
		dash_n = 1;
		AxeMaker(y, dash_n, x);
	}

}

void	rush(int x, int y)
{
	x_axe(x, y);
}

int main()
{
	rush(5, 3);
}
