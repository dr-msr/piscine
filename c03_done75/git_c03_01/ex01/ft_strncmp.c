/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahim <mrahim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 09:36:32 by mrahim            #+#    #+#             */
/*   Updated: 2023/09/21 08:10:02 by mrahim           ###   ########.KL       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] > s2[i])
		{
			return (1);
		}
		else if (s1[i] < s2[i])
		{
			return (-1);
		}
		i++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>

// Compares a with b up until n character, lexicographically. 
// Returns the value difference.

int	main()
{
	char *a = "Testang";
	char *b = "Testing";
	int limit = 4;

	printf("%d\n",ft_strncmp(a,b,limit));
	printf("%d\n",strncmp(a,b,limit));
	return (0);
}*/
