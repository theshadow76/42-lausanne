/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                    :+:    :+:           */
/*                                                    +:+ +:+         +:+     */
/*   By: vwalker <vwalker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 13:56:45 by vwalker           #+#    #+#             */
/*   Updated: 2025/06/26 14:07:09 by vwalker        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdbool.h>

void	ft_is_negative(int n)
	{
	char	stra;

	if (n < 0)
	{
		stra = 'N';
		putchar(stra);
		return (stra);
	}
	else if (n >= 0)
	{
		stra = 'P';
		putchar(stra);
		return (stra);
	}
}
