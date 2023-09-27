/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahim <mrahim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 08:40:38 by mrahim            #+#    #+#             */
/*   Updated: 2023/09/21 12:16:43 by mrahim           ###   ########.KL       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	output;

	i = 1;
	output = 1;
	while (i <= nb)
	{
		output = output * i;
		i++;
	}
	if (nb < 0)
		return (0);
	else
		return (output);
}
/*
#include <stdio.h>

int	main(void)
{
		printf("%d\n",ft_iterative_factorial(-100));
		return (0);
}*/
