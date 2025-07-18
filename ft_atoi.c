/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwalker <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 08:26:40 by vwalker           #+#    #+#             */
/*   Updated: 2025/07/18 08:34:07 by vwalker          ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(const char *nbr)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (nbr[i])
	{
		if (nbr[i] == '-')
		{
			write(1, "-", 1);
			n = -n;
		}
		if (nbr[i] >= '0' && nbr[i] <= '9')
		{
			n = (nbr[i] * 10) + (nbr[i] - '0');
			write(1, &nbr[i], 1);
		}
		i++;
	}
	return (n);
}

int	main()
{
	const char 	*nbr;

	nbr = "120";
	ft_atoi(nbr);
	return (0);
}
