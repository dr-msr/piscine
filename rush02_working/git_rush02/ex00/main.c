/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahim@42KL | drmsr <me@drmsr.dev>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 09:24:10 by mrahim@42KL |     #+#    #+#             */
/*   Updated: 2023/10/01 18:13:10 by mrahim@42KL |    ###   ########.KL       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "dict.h"

int	main(int argc, char *argv[])
{
    char *input;
	char *ref_dict;

	if (argc == 1)
	{
		intro();
		return (1);
	}
	if (argc < 2 || argc > 3)
	{
		ft_putstr("Please input 1 or 2 arguments.");
		return (1);
	}
	if (argc == 2)
	{
		input = argv[1];
		ref_dict = "numbers.dict";
	}
	if (argc == 3)
	{
		ref_dict = argv[1];
		input = argv[2];
	}
	if (check_input_number(input) == 0)
	{
		ft_putstr("Please enter only numbers.");
		return (1);
	}
	init_dict();

	if (load_dict(ref_dict) == 1)
	{
		free(dict_array);
		return (1);
	}
	trim_dict();
	ft_init(input);
	free(dict_array);
	return (0);
}
