/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strcapitalize.c                                  :+:    :+:           */
/*                                                      +:+                   */
/*   By: vwalker <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2025/06/29 18:49:00 by vwalker        #+#    #+#                */
/*   Updated: 2025/06/29 19:05:44 by vwalker        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

void	ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	f;
	int	is_low;
	int	is_up;

	i = 0;
	f = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		is_low = str[i] >= 'a' && str[i] <= 'z';
		is_up = str[i] >= 'A' && str[i] <= 'Z';
		if (f && is_low)
		{
			str[i] -= 32;
			f = 0;
		}
		else if (is_low || is_up || (str[i] >= '0' && str[i] <= '9'))
			f = 0;
		else
			f = 1;
		i++;
	}
	return (str);
}
