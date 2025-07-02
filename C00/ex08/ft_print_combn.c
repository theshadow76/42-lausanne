/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwalker <vwalker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 15:36:12 by vwalker           #+#    #+#             */
/*   Updated: 2025/06/26 09:43:05 by vwalker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <math.h>
#include <stdbool.h>  // For boolean data type (bool, true, false)


// void ft_print_combn(int n) {
//     // the idea is to get every combination of n different numbers meaning that if n = 2 the max number woul be 99 if n = 3 the max number 999
//     // to start I am going to add the initial  variable that is going to store all the data
//     char numbr1; // keep track of first number
//     char numbr2; // keep track of second number
    
//     // Now I am going to make a for loop which is going to loop 10 * n times
//     for (int k = 0; k <= pow(10, n); k++) {
//         // here the idea is to keep track of the first number
//         // Convert k to string with padding left if the string is shorter than n
//         // Iterate over k
//         // for (int j; j < n; j++)
//         //  if strk[j] < strk[j+1]
//         //      good
//         //  else:
//         //   continue to next loop (next value of k)
//         // print(j)

//         for (int j = 0; j < n; j++){
            
//         }
//     }
    
// }


// void ft_print_combn(int n) {
//     // the idea is to get every combination of n different numbers meaning that if n = 2 the max number woul be 99 if n = 3 the max number 999
//     // to start I am going to add the initial  variable that is going to store all the data
//     char numbr1; // keep track of first number
//     char numbr2; // keep track of second number

//     // Now I am going to make a for loop which is going to loop 10 * n times
//     for (int k = 0; k <= n; k++) {
//         // here the idea is to keep track of the first number
//         int iter1 = k;
//         for (int i = 0; i < 10; i++) {
//             // and here the idea is to keep track of the other nubers
//             int iter2 = i;
//             int result_iterations = iter2 * iter1;
//             printf("%d\n", &result_iterations);
//         }
//     }
    
// }

void write_char(char c)
 {
    putchar(c);
 }

void ft_print_combn(int n) {
    
}

int main() {
    ft_print_combn(2);
    
    return 0;
}