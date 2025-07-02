/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_putnbr.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: vwalker <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2025/07/02 13:34:30 by vwalker        #+#    #+#                */
/*   Updated: 2025/07/02 13:48:25 by vwalker        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	convert_int_to_str(int num, char *result)
{
	
}

void	ft_putnbr(int nb)
{
	write(1, &nb, 1);
}
