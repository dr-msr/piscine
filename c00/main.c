#include <stdio.h>
#include "./ex00/ft_putchar.c"
#include "./ex01/ft_print_alphabet.c"
#include "./ex02/ft_print_reverse_alphabet.c"
#include "./ex03/ft_print_numbers.c"
#include "./ex04/ft_is_negative.c"

void ft_putchar(char c);
void ft_print_alphabet(void);
void ft_print_reverse_alphabet(void);
void ft_print_numbers(void);
void ft_is_negative(int i);

int main(void)
{
    printf("\nex00 : \n");
    ft_putchar('Z');
    /* tukar char Z ke char lain pun boleh*/

    printf("\n\nex01 : \n");
    ft_print_alphabet();

    printf("\n\nex02 : \n");
    ft_print_reverse_alphabet();

    printf("\n\nex03 : \n");
    ft_print_numbers();

    printf("\n\nex04 : \n");
    ft_is_negative(4);
    /* cuba nombor lain negative positive*/


}
