/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahim <mrahim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 10:19:57 by mrahim            #+#    #+#             */
/*   Updated: 2023/09/17 10:29:27 by mrahim           ###   ########.KL       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
// #include "./ft_putch
// #include "./rush01.c"
// #include "./rush02.c"
// #include "./rush03.c"
// #include "./rush04.c"
// #include "./rush00.c"
//
void	ft_putchar(char a);
void	rush(int a, int b);

int	convert(char *b)
{
	int	i;
	int	output;

	i = 0;
	output = 0;
	while (b[i] != '\0')
	{
		if ((b[i] < '0') || (b[i] >= '9'))
		{
			write(1, "Invalid character detected. ", 28);
			return (0);
		}
		else
		{
			output *= 10;
			output += b[i] - '0';
			i++;
		}
	}
	return (output);
}

int	main(int argc, char *argv[])
{
	int	ax;
	int	ay;

	if (argc <= 2 || argc > 3)
	{
		write(1, "Please provide two arguments X Y\n", 33);
		return (0);
	}
	else
	{
		ax = convert(argv[1]);
		ay = convert(argv[2]);
		rush(ax, ay);
		return (0);
	}
}
