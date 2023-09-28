/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahim <mrahim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 08:11:33 by mrahim            #+#    #+#             */
/*   Updated: 2023/09/26 10:18:04 by mrahim           ###   ########.KL       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
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

void	ft_putnbr_base(int nbr, char *base)
{
	int	length;
	int	output;
	int	error;

	output = nbr;
	length = ft_strlen(base);
	error = ft_checkerror(base, length);
	if (error == 0)
	{
		if (output < 0)
		{
			ft_putchar('-');
			output = output * -1;
			ft_putnbr_base(output, base);
		}
		else if (output > length)
		{
			ft_putnbr_base(output / length, base);
			ft_putnbr_base(output % length, base);
		}
		else if (output <= length)
			ft_putchar(base[output]);
	}
}
/*
int	main(void)
{
	int		input;

//	char*	base = "0123456789"; // decimal
	char*	base = "01"; // binary
//	char*	base = "0123456789ABCDEF"; // hexa
//	char*	base = "poneyvif"; // octal

	input = -100;

	ft_putnbr_base(input,base);
	return (0);
}*/
