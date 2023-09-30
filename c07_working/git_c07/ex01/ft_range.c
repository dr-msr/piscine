/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahim@42KL | drmsr <me@drmsr.dev>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 09:00:27 by mrahim@42KL |     #+#    #+#             */
/*   Updated: 2023/09/30 09:17:08 by mrahim@42KL |    ###   ########.KL       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	if (min >= max)
		return (NULL);
	array = malloc((max - min) * sizeof(int));
	if (array == NULL)
		return (0);
	i = 0;
	while (i < (max - min))
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}
/*
#include <stdio.h>

int	main(void)
{
	int	*array;
	int	min;
	int	max;
	int	i;

	min = 1;
	max = 100;

	array = ft_range(min, max);
	i = 0;

	while (i < (max - min))
	{
		printf("%d\n", array[i]);
		i++;
	}
	free(array);
	return (0);
}*/
