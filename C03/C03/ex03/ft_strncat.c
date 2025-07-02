/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strncat.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: vwalker <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2025/07/01 15:33:49 by vwalker        #+#    #+#                */
/*   Updated: 2025/07/02 13:18:28 by vwalker        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && j < nb)
	{
		dest [i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
