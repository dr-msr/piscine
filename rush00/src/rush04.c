/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahim <mrahim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 10:57:34 by mrahim            #+#    #+#             */
/*   Updated: 2023/09/17 10:57:35 by mrahim           ###   ########.KL       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char a);

void	ft_print_top(int x)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
		{
			ft_putchar('A');
		}
		else if (i == x)
		{
			ft_putchar('C');
		}
		else
		{
			ft_putchar('B');
		}
		i++;
	}
	ft_putchar('\n');
}

void	ft_print_bot(int x)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
		{
			ft_putchar('C');
		}
		else if (i == x)
		{
			ft_putchar('A');
		}
		else
		{
			ft_putchar('B');
		}
		i++;
	}
	ft_putchar('\n');
}

void	ft_print_mid(int x, int y)
{
	int	i;
	int	j;

	j = 1;
	while (j <= y - 2)
	{
		i = 1;
		while (i <= x)
		{
			if (i == 1 || i == x)
			{
				ft_putchar('B');
			}
			else
			{
				ft_putchar(' ');
			}
			i++;
		}
		j++;
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	if ((x <= 0) | (y <= 0))
	{
		write(1, "Please only use positive integer for x and y.\n", 46);
	}
	else
	{
		ft_print_top(x);
		if (y > 2)
		{
			ft_print_mid(x, y);
			ft_print_bot(x);
		}
		else if (y > 1)
		{
			ft_print_bot(x);
		}
	}
}
