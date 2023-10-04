/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex02.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahim@42KL | drmsr <me@drmsr.dev>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 11:14:20 by mrahim@42KL |     #+#    #+#             */
/*   Updated: 2023/10/02 11:37:29 by mrahim@42KL |    ###   ########.KL       */
/*                                                                            */
/* ************************************************************************** */

#include "git_c08/ex02/ft_abs.h"
#include <stdio.h>

int	main(void)
{
	int input;

	input = -34;

	printf("Before conversion, input is %d\n",input);
	ABS(input);
	printf("After conversion, absolute value of input is %d\n", input);

	return (0);
}
