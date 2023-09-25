/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahim <mrahim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 11:55:55 by mrahim            #+#    #+#             */
/*   Updated: 2023/09/25 12:52:03 by mrahim           ###   ########.KL       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	count;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	count = 2;
	while (count < nb)
	{
		if (count * count == nb)
			return (count);
	count++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	int output;
	int input;

	input = 1;
	output = ft_sqrt(input);

	printf("The sqrt for %d is %d\n",input,ft_sqrt(input));
	return (output);
}*/
