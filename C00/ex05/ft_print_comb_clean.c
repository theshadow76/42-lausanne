/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb_clean.c                               :+:    :+:           */
/*                                                    +:+ +:+         +:+     */
/*   By: vwalker <vwalker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 14:43:52 by vwalker           #+#    #+#             */
/*   Updated: 2025/06/26 11:19:27 by vwalker        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	print_char(char n)
{
	write(1, &n, 1);
}

void	print_nums(char h, char t, char u)
	{
		if (h != '7' && t != '8' && u != '9')
                {
                        print_char(h);
                	print_char(t);
                	print_char(u);
			print_char(',');
                	print_char(' ');

                }
		else 
		{
			print_char(h);
                        print_char(t);
                        print_char(u);
		}
	}

void	ft_print_comb(void)
{
	char	h = '0';
	char	t = '1';
	char	u = '2';

	while ((h <= '7') || (t <= '8') || (u <= '9'))
	{
		print_nums(h, t, u);
		if (u != '9')
		{
			++u;
		}
		else
		{
			if (t != '8')
			{
				++t;
				u = t + 1;
			}
			else
			{
				++h;
				t = h + 1;
				u = t + 1;
			}
		}
	}
}
