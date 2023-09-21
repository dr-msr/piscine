/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahim <mrahim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:36:13 by mrahim            #+#    #+#             */
/*   Updated: 2023/09/21 08:18:06 by mrahim           ###   ########.KL       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	trim_sign(char *str, int *mark)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (!(str[i] >= '0' && str[i] <= '9'))
	{
		if (str[i] == '-')
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
	char *a = "  ---+--+1234ab567";
	printf("%d",ft_atoi(a));
	printf("\n");
	ft_putstr(a);
	ft_putstr("\n");
	return (0);
}*/
