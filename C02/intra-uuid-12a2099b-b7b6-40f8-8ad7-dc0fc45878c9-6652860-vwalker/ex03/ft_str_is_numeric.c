/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_str_is_numeric.c                                 :+:    :+:           */
/*                                                      +:+                   */
/*   By: vwalker <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2025/06/29 18:11:52 by vwalker        #+#    #+#                */
/*   Updated: 2025/06/29 18:22:37 by vwalker        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	valid;

	valid = 1;
	while (*str != '\0')
	{
		if (!(*str >= '0' && *str <= '9'))
		{
			valid = 0;
			break ;
		}
		str++;
	}
	return (valid);
}
