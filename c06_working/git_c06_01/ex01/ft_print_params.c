/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahim@42KL | drmsr <me@drmsr.dev>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 10:26:28 by mrahim@42KL |     #+#    #+#             */
/*   Updated: 2023/09/27 10:26:48 by mrahim@42KL |    ###   ########.KL       */
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

int	main(int argc, char *argv[])
{
	int	i;

	if (argc <= 1)
	{
		return (1);
	}
	else
	{
		i = 1;
		while (i <= argc - 1)
		{
			ft_putstr(argv[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
