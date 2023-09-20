/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahim <mrahim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 09:36:32 by mrahim            #+#    #+#             */
/*   Updated: 2023/09/19 14:31:57 by mrahim           ###   ########.KL       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;
	int	diff;
	int	compare;

	compare = n;
	i = 0;
	diff = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < compare)
	{
		diff = s1[i] - s2[i];
		if (diff != 0)
		{
			return (diff);
		}
		else
		{
			i++;
		}
	}
	return (diff);
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
} */
