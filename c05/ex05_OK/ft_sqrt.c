/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahim <mrahim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 11:55:55 by mrahim            #+#    #+#             */
/*   Updated: 2023/10/14 21:43:34 by mrahim@42KL |    ###   ########.KL       */
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
	while (count * count <= nb && count <= 46340)
	{
		if (count * count == nb)
			return (count);
		count++;
	}
	return (0);
}
/*
# include <stdio.h>
# include <stdlib.h>

int	main()
{
	int input;

	input = 144;

	printf("The sqrt for %d is %d\n",input,ft_sqrt(input));
	return (0);
}*/
