/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahim <mrahim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 10:48:00 by mrahim            #+#    #+#             */
/*   Updated: 2023/09/26 10:48:05 by mrahim           ###   ########.KL       */
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
/*
There are 3 steps to decide prime number.

1. Special case 
- if its <= 1, it is not a prime number.
- if its 2 and 3, they are always prime number.

2. If modulo 2 && 3 == 0 (divisible by 2,3), it is not a prime.

3. Get the value of (6k + 1) and (6k - 1). 
- K is start from 1, until sqrt of n.
- use while (6k-1) * (6k-1) < n
- check if divisible (modulo 0) for both (6k + 1) and (6k - 1). 
- If both divisible, then it is prime number.
*/
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
	limit = 100;
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