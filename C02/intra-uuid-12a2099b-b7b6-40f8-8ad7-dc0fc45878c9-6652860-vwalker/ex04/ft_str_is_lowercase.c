/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_str_is_lowercase.c                               :+:    :+:           */
/*                                                      +:+                   */
/*   By: vwalker <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2025/06/29 18:23:45 by vwalker        #+#    #+#                */
/*   Updated: 2025/06/29 18:25:29 by vwalker        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	valid;

	valid = 1;
	while (*str != '\0')
	{
		if (!(*str >= 'a' && *str <= 'z'))
		{
			valid = 0;
			break ;
		}
		str++;
	}
	return (valid);
}
