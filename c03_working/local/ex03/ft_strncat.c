/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahim <mrahim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:34:30 by mrahim            #+#    #+#             */
/*   Updated: 2023/09/19 14:49:26 by mrahim           ###   ########.KL       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	target;
	int	run;
	int	limit;

	limit = nb;
	target = 0;
	while (dest[target] != '\0')
	{
		target++;
	}
	run = 0;
	while (src[run] != '\0' && run < limit)
	{
		dest[target] = src[run];
		target++;
		run++;
	}
	dest[target] = '\0';
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>

// Concatenate b into a, but truncated b into n integer only.
int	main()
{
	char a[100] = "This is ayam. ";
	char b[100] = "Ayam is goreng.";

	printf("%s\n",ft_strncat(a,b,12));
			return (0);
}*/
