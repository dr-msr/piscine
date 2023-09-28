/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahim <mrahim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 07:54:52 by mrahim            #+#    #+#             */
/*   Updated: 2023/09/14 08:53:25 by mrahim           ###   ########.KL       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write(1, "N", 1);
	}
	else
	{
		write(1, "P", 1);
	}
}

/*int	main(void)
{
	ft_is_negative(5);
	write(1, "\n", 2);
	ft_is_negative(-5);
	return (0);
}*/
