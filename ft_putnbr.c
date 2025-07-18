/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwalker <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 08:35:35 by vwalker           #+#    #+#             */
/*   Updated: 2025/07/18 08:39:52 by vwalker          ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long	i;
	int	u;
	char	nbr;

	i = nb;
	if (i < 0)
	{
		write(1, "-", 1);
		i = -i;
	}
	if (i > 9)
	{
		ft_putnbr(i / 10);
		u = i % 10;
		nbr = u + '0';
		write(1, &nbr, 1);
	}
	else
	{
		nbr = i + '0';
		write(1, &nbr, 1);
	}
}

int	main()
{
	ft_putnbr(1293849340);
	return (0);
}
