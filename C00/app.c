#include <stdio.h>

void ft_print_alphabet(void) {
    char c;
    for (c = 'a'; c <= 'z'; ++c) {
        printf("%c", c);
    }
}

int main() {
    ft_print_alphabet();
    return 0;
}