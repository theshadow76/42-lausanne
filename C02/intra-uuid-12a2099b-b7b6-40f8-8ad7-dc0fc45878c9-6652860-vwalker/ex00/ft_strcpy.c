/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strcpy.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: vwalker <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2025/06/29 15:57:48 by vwalker        #+#    #+#                */
/*   Updated: 2025/06/30 11:00:58 by vwalker        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	*ft_strcpy(char *dest, char *src) // the function
{
	int	i; //declare i for the while loop

	i = 0; // add 0 for initial index
	while (src[i] != '\0') // while the variable *src is not null
	{
		dest[i] = src[i]; // add the value of the char in the index of [i] the value of the char in the index of [i] for the src variable.
		i++; // same as i = i + 1;
	}
	dest[i] = '\0'; // make the index of dest null
	return (dest); //return it
}
