/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aawgku-o <aawgku-o@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 16:34:53 by aawgku-o          #+#    #+#             */
/*   Updated: 2023/10/01 18:46:20 by aawgku-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "dictionary.h"

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


	unsigned long long raw = ft_atoi(input);
	 if (raw >= 1000000000000000)
		{
		init_print_trio(input,100,5);
		ft_print_denominator(5);
	 	}
	 if (raw >= 1000000000000)
		{
		init_print_trio(input,100,4);
		ft_print_denominator(4);
	 	}
	 if (raw >= 1000000000)
		{
		init_print_trio(input,100,3);
		ft_print_denominator(3);
	 	}
	 if (raw >= 1000000)
		{
		init_print_trio(input,100,2);
		ft_print_denominator(2);
	 	}
	 if (raw >= 1000 )
		{
		init_print_trio(input,100,1);
		ft_print_denominator(1);
	 	}
	 if (raw >= 100)
		{
	 	init_print_trio(input,100,0);
	 	}
	if (raw >= 10 && raw <= 99)
		{
		init_print_trio(input,10,0);
		}
	if (raw > 0 && raw < 10)
		{
		init_print_trio(input,1,0);
		}

	free(dict_array);
	return (0);

}
