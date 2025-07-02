/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strncmp.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: vwalker <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2025/07/01 13:25:01 by vwalker        #+#    #+#                */
/*   Updated: 2025/07/01 13:39:48 by vwalker        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && i < n)
		i++;
	if (s1[i] == s2[i] || i == n)
		return (0);
	else
		return (s1[i] - s2[i]);
}
