/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahim <mrahim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 13:55:20 by mrahim            #+#    #+#             */
/*   Updated: 2023/09/16 15:14:38 by mrahim           ###   ########.KL       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_putchar.c"

void	ft_putchar(char a);







void	ft_print_top(int x)
{
	int i;

	i = 1;

	while (i <= x)
	{

	if (i == 1) {
		ft_putchar('/');
		i++;
	}
	else if (i == x) {
		ft_putchar(92);
		return;
	}
	else {
		ft_putchar('*');
		i++;
	}
	}
}










void ft_print_bot(int x)
{   
    int i;
    
    i = 1;
   	
    while (i <= x && x != 1)
    {
    
    if (i == 1) {
        ft_putchar(92);
        i++;
    }
    else if (i == x) {
        ft_putchar('/');
        return;
    }
    else {
        ft_putchar('*');
        i++;
    }   
    }
}


//void ft_print_mid(int x, int y)
//{
//}

void	rush(int x, int y)
{
	if (x <= 0 | y <= 0)
	{
		write(1,"Please only use positive integer for x and y.",45);

	}
   	else
   	{

	ft_print_top(x);

	if (y > 3)
	{
	ft_print_mid(x,y);
	}

	ft_print_bot(x);

	}
}


int	main()
{
	rush(2,1);
	return(0);
}
