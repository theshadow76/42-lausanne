/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwalker <vwalker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 15:20:04 by vwalker           #+#    #+#             */
/*   Updated: 2025/06/25 15:24:57 by vwalker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <unistd.h>

void ft_putnbr(int nb) {
    write(1, &nb, 1);
}

int main() {
    int nbr = 1;
    ft_putnbr(nbr);

    return 0;
}