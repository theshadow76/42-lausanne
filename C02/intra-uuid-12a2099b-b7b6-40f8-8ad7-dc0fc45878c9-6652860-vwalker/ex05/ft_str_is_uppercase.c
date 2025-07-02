/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_str_is_uppercase.c                               :+:    :+:           */
/*                                                      +:+                   */
/*   By: vwalker <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2025/06/29 18:26:17 by vwalker        #+#    #+#                */
/*   Updated: 2025/06/29 18:29:15 by vwalker        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	valid;

	valid = 1;
	while (*str != '\0')
	{
		if (!(*str >= 'A' && *str <= 'Z'))
		{
			valid = 0;
			break ;
		}
		str++;
	}
	return (valid);
}
