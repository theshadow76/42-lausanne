/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwalker <vwalker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 14:43:52 by vwalker           #+#    #+#             */
/*   Updated: 2025/06/26 10:38:05 by vwalker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <unistd.h>
void print_char(char n) {
    write(1, &n, 1);
}


void ft_print_comb(void) {
    char h;
    char t;
    char u;
    h = '0';
    t = '1';
    u = '2';

    while ((h <= '7') || (t <= '8') || (u <= '9')) {
        print_char(h);
        print_char(t);
        print_char(u);
        if (h == '7' && t == '8' && u == '9') {
            break;
        }
        print_char(',');
        print_char(' ');
        
        if (u != '9') {
            ++u;
        }
        else {
            if (t != '8') {
                ++t;
                u = t + 1;
            }
            else {
                ++h;
                t = h + 1;
                u = t + 1;
            }
            //break;
        }
    }
}


int main() {
    ft_print_comb();
    
    return 0;
}
