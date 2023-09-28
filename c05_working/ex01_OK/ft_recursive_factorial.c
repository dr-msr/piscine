/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahim <mrahim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:19:01 by mrahim            #+#    #+#             */
/*   Updated: 2023/09/27 13:14:50 by mrahim@42KL |    ###   ########.KL       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)

{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n",ft_recursive_factorial(0));
	return (0);
}*/
