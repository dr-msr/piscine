/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahim    <me@drmsr.dev             >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:38:12 by mrahim            #+#    #+#             */
/*   Updated: 2023/09/13 12:03:33 by mrahim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Declare Include Here */
#include <stdio.h>
#include "git_c00/ex00/ft_putchar.c"
#include "git_c00/ex01/ft_print_alphabet.c"
#include "git_c00/ex02/ft_print_reverse_alphabet.c"
#include "git_c00/ex03/ft_print_numbers.c"
#include "git_c00/ex04/ft_is_negative.c"


/* Declare Prototype Here */
void	ft_putchar(char c);
void	ft_print_alphabet(void);
void	ft_print_reverse_alphabet(void);
void	ft_print_numbers(void);
void	ft_is_negative(int n);

/* This is main function */
int	main(void)
{
	printf("\nex00: \n");
	ft_putchar('Z');
	printf("\n\nex01: \n");
	ft_print_alphabet();
	printf("\n\nex02: \n");
	ft_print_reverse_alphabet();
	printf("\n\nex03: \n");
	ft_print_numbers();
	printf("\n\nex04: \n");
	ft_is_negative(-5);
	printf("\n");
	ft_is_negative(5);


}
