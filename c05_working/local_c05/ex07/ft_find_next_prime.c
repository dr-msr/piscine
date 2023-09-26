/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahim <mrahim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 13:30:52 by mrahim            #+#    #+#             */
/*   Updated: 2023/09/26 13:30:55 by mrahim           ###   ########.KL       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	k;

	if (nb <= 1)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	k = 1;
	while ((6 * k - 1) * (6 * k - 1) <= nb)
	{
		if ((nb % (6 * k - 1)) == 0 || (nb % (6 * k + 1)) == 0)
			return (0);
	k++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (nb >= 2)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		else
		nb++;
	}
	return (0);
}
/*
# include <stdio.h>

int	main(void)
{
	int input;
	int output;

	input = 100;

	output = ft_find_next_prime(input);

	printf("The input is %d\n", input);
	printf("The next prime number is : %d\n", output);
	return 0;

}*/