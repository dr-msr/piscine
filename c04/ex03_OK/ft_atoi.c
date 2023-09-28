/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahim <mrahim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:36:13 by mrahim            #+#    #+#             */
/*   Updated: 2023/09/26 10:17:45 by mrahim           ###   ########.KL       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	trim_sign(char *str, int *mark)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] != '\0' && (str[i] == 43 || str[i] == 45))
	{
		if (str[i] == 45)
		{
			count++;
		}
	i++;
	}
	*mark = i;
	if (count % 2 == 1)
		return (-1);
	return (1);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	output;
	int	i;

	sign = trim_sign(str, &i);
	output = 0;
	while (str[i] && str[i] >= 48 && str[i] <= 57)
	{
		output = output * 10;
		output = output + (str[i] - 48);
		i++;
	}
	output = output * sign;
	return (output);
}
/*
#include <stdio.h>

int main(void)
{
	char *a = "  ----+--+1234ab567";
	printf("%d",ft_atoi(a));
	printf("\n");
	printf("%s\n",a);
	return (0);
}*/
