/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahim <mrahim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 11:06:08 by mrahim            #+#    #+#             */
/*   Updated: 2023/09/25 11:06:09 by mrahim           ###   ########.KL       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

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

int	ft_checkerror(char *base, int length)
{
	int	i;
	int	j;

	if (base[0] == '\0' || length == 1)
		return (1);
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == 43 || base[i] == 45 || base[i] == ' ')
			return (1);
		j = 0;
		while (base[j] <= length)
		{
			if (base[i] == base[j])
				return (1);
		j++;
		}
	i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base, char *out)
{
	int	output;
	int	error;
	int	length;

	length = 0;
	while (base[length] != '\0')
	{
		length++;
	}
	output = nbr;
	error = ft_checkerror(base, length);
	if (error == 0 && output < 0)
	{
		write(1, "-", 1);
		output = output * -1;
		ft_putnbr_base(output, base, out);
	}
	else if (error == 0 && output > length)
	{
		ft_putnbr_base(output / length, base, out);
		ft_putnbr_base(output % length, base, out);
	}
	else if (error == 0 && output <= length)
		write(1, &base[output], 1);
}

int	ft_atoi_base(char *str, char *base)
{
	int		input;
	char	*out;
	int		length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	out = "0";
	input = ft_atoi(str);
	ft_putnbr_base(input, base, out);
	return (0);
}
/*
#include <stdio.h>

int main(void)
{
	char *a = "  ---+--+1234ab567";
	char *base = "01";

	printf("\n%d\n",ft_atoi(a));
	ft_atoi_base(a, base);
	return (0);
}*/
