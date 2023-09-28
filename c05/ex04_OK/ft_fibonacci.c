/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahim <mrahim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:58:48 by mrahim            #+#    #+#             */
/*   Updated: 2023/09/25 12:55:44 by mrahim           ###   ########.KL       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
#include <stdio.h>

int	main(void)
{
	int limit;
	int i;

	limit = 20;
	i = 0;
	while (i <= limit)
	{
		printf("%d, ",ft_fibonacci(i));
		i++;
	}
	return (0);
}*/
