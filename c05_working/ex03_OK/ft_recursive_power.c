/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahim <mrahim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:03:24 by mrahim            #+#    #+#             */
/*   Updated: 2023/09/25 12:55:07 by mrahim           ###   ########.KL       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power > 0)
		return (nb * ft_recursive_power(nb, power - 1));
	else if
		(power < 0)
			return (0);
	else if
		(power == 0)
			return (1);
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n",ft_recursive_power(2,2));
	return (0);
}*/
