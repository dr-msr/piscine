/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahim <mrahim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:34:32 by mrahim            #+#    #+#             */
/*   Updated: 2023/09/25 12:56:02 by mrahim           ###   ########.KL       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	result = nb;
	while (--power)
		result = result * nb;
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n",ft_iterative_power(3,3));
			return (0);
}*/
