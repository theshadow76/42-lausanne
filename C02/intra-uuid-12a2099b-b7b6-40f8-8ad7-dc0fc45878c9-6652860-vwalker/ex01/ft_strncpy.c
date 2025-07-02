/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strncpy.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: vwalker <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2025/06/29 16:06:30 by vwalker        #+#    #+#                */
/*   Updated: 2025/06/30 11:15:58 by vwalker        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i; // the unsigned int allows you have the int positive and negative.

	i = 0; // giving the unsigned int a value
	while (src[i] != '\0' && i < n) // the while loop. checking if src[i] is not null and if i is bigger than n
	{
		dest[i] = src[i]; // add the dest[i] value to the src[i] value
		i++; // incremeant by 1 the i variable
	}
	while (i < n) // while i is smaller than n
	{
		dest[i++] = '\0'; // dest[i++] meaning dest of index i = i + 1 is null
	}
	return (dest); // we return dest
}
