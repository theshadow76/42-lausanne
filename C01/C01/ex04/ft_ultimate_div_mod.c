/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_ultimate_div_mod.c                               :+:    :+:           */
/*                                                      +:+                   */
/*   By: vwalker <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2025/06/27 10:16:39 by vwalker        #+#    #+#                */
/*   Updated: 2025/06/27 10:20:20 by vwalker        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	buffer1;
	int	buffer2;

	buffer1 = *a / *b;
	buffer2 = *a % *b;
	*a = buffer1;
	*b = buffer2;
}
