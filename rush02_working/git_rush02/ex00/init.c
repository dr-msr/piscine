/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahim@42KL | drmsr <me@drmsr.dev>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 18:11:28 by mrahim@42KL |     #+#    #+#             */
/*   Updated: 2023/10/01 18:12:11 by mrahim@42KL |    ###   ########.KL       */
/*                                                                            */
/* ************************************************************************** */

void	ft_init(char *input)
{
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
}
