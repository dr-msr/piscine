/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahim@42KL | drmsr <me@drmsr.dev>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 08:35:02 by mrahim@42KL |     #+#    #+#             */
/*   Updated: 2023/09/29 08:35:03 by mrahim@42KL |    ###   ########.KL       */
/*                                                                            */
/* ************************************************************************** */

// 	Assignment name  : wdmatch
//	Expected files   : wdmatch.c
//	Allowed functions: write
//	--------------------------------------------------------------------------------
//	
//	Write a program that takes two strings and checks whether it's possible to
//	write the first string with characters from the second string, while respecting
//	the order in which these characters appear in the second string.
//
//	If it's possible, the program displays the string, followed by a \n, otherwise
//	it simply displays a \n.
//
//	If the number of arguments is not 2, the program displays a \n.
//
//	Examples:
//
//	$>./wdmatch "faya" "fgvvfdxcacpolhyghbreda" | cat -e
//	faya$
//	$>./wdmatch "faya" "fgvvfdxcacpolhyghbred" | cat -e
//	$
//	$>./wdmatch "quarante deux" "qfqfsudf arzgsayns tsregfdgs sjytdekuoixq " | cat -e
//	quarante deux$
//	$>./wdmatch "error" rrerrrfiiljdfxjyuifrrvcoojh | cat -e
//	$
//	$>./wdmatch | cat -e
//	$

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

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*find;
	char	*base;

	if (argc != 3)
	{
		ft_putstr("\n");
		return (1);
	}
	find = argv[1];
	base = argv[2];
	i = 0;
	j = 0;
	while (i < ft_strlen(base))
	{
		if (find[i] == '\0')
		{
			ft_putstr(find);
			ft_putstr("\n");
			return (0);
		}
		else if (base[j] == '\0')
		{
			ft_putstr("\n");
			return (0);
		}
		else if (find[i] == base[j])
		{
			i++;
			j++;
		}
		else
		{
			j++;
		}
	}
}
