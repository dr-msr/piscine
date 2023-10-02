/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex01.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahim@42KL | drmsr <me@drmsr.dev>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:36:21 by mrahim@42KL |     #+#    #+#             */
/*   Updated: 2023/10/02 10:37:50 by mrahim@42KL |    ###   ########.KL       */
/*                                                                            */
/* ************************************************************************** */

#include "git_c08/ex01/ft_boolean.h"

void	ft_putstr(char *str)
	{
		while (*str)
		write(1, str++, 1);
	}

t_bool ft_is_even(int nbr)
	{
		return ((EVEN(nbr)) ? TRUE : FALSE);
	}

int main(int argc, char **argv)
	{
		(void)argv;
		if (ft_is_even(argc - 1) == TRUE)
			ft_putstr(EVEN_MSG);
		else
			ft_putstr(ODD_MSG);
			return (SUCCESS);
	}
