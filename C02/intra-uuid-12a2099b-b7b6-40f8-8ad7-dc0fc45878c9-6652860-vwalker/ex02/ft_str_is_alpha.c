/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_str_is_alpha.c                                   :+:    :+:           */
/*                                                      +:+                   */
/*   By: vwalker <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2025/06/29 16:11:10 by vwalker        #+#    #+#                */
/*   Updated: 2025/06/30 11:23:57 by vwalker        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	valid;
	int	i;

	valid = 1;
	i = 0;
	while (str[i]) // while str of index i hasn't arrived to the end
	{
		// here we are checking if str[i] is bigger or the same as 'a' and str[i] is smaller or the same of 'z' or str[i] is bigger or the same as 'A' and str[i] is smaller or the same as 'Z' and we also add the `!` symbol to say that all of this should not happend, if that's the case we make the valid variable equal to 0 and we retrun it
		if (!(str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			valid = 0;
			return valid;
		}
		str++; // here we increment the o i variable with 1 something like `i = i + 1;`
	}
	return (1); // and we return it
}
