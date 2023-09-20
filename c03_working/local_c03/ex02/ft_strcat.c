/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahim <mrahim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:34:30 by mrahim            #+#    #+#             */
/*   Updated: 2023/09/20 10:48:22 by mrahim           ###   ########.KL       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	target;
	int	run;

	target = 0;
	while (dest[target] != '\0')
	{
		target++;
	}
	run = 0;
	while (src[run] != '\0')
	{
		dest[target] = src[run];
		target++;
		run++;
	}
	dest[target] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

// Concatenante b into a. 
 
int	main()
	{
		char a[100] = "This is ayam. ";
		char b[100] = "Ayam is goreng. ";
		char c[100] = "Makan dengan nasi.";

		printf("%s\n",ft_strcat(a,b));
		printf("%s\n",strcat(a,c));
		return (0);
	}*/
