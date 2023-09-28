/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahim <mrahim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 10:48:00 by mrahim            #+#    #+#             */
/*   Updated: 2023/09/27 13:19:40 by mrahim@42KL |    ###   ########.KL       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	if ((nb % 2 == 0) || (nb % 3 == 0))
		return (0);
	i = 4;
	while (nb % i != 0)
		i++;
	if (i == nb)
		return (1);
	return (0);
}
/*
# include <stdio.h>

int	main(void)
{
	int input;
	int output;
	char* outcome;
	int limit;
	int i;
	int counter;

	// Edit here //
	input = 0;
	limit = 20;
	// Edit here //

	output = ft_is_prime(input);
	if (output == 1)
		outcome = "Yes";
	outcome = "No";

	printf("This is input : %d \nOutput : %d \n",input, output);
	printf("Is it prime number? %s\n\n" , outcome);
	printf("Generating list of %d prime numbers from 0 ..\n#####\n", limit);

	i = 0;
	counter = 0;
	while (counter <= limit)
	{
		if (ft_is_prime(i) == 1)
		{
			printf("%d\n", i);
			counter++;
		}
		i++;
	}
	return (0);
}*/