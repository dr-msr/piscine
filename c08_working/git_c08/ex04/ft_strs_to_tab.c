/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahim@42KL | drmsr <me@drmsr.dev>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:09:35 by mrahim@42KL |     #+#    #+#             */
/*   Updated: 2023/10/02 12:09:37 by mrahim@42KL |    ###   ########.KL       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i + 1] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dest;

	dest = malloc(sizeof(char) * ft_strlen(src) + 1);
	if (dest == NULL)
		return (0);
	ft_strcpy(dest, src);
	return (dest);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int				i;
	t_stock_str		*new_struct;

	new_struct = malloc((ac + 1) * sizeof(t_stock_str));
	if (new_struct == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		new_struct[i].size = ft_strlen(av[i]);
		new_struct[i].str = av[i];
		new_struct[i].copy = ft_strdup(av[i]);
		i++;
	}
	new_struct[i].str = 0;
	new_struct[i].copy = 0;
	return (new_struct);
}
/* #include <stdio.h> // for testing

int	main(int argc,char **argv)
{
	struct s_stock_str	*new_struct;
	printf("\n");
	new_struct = ft_strs_to_tab(argc, argv);


	int i = 1;
	while (i <= argc)
	{

		printf("=====\nArray [%d]\n Size : %d \n",i, new_struct[i].size, );
		printf)(" Str : %s \n Copy : %s\n",new_struct[i].str, new_struct[i].copy)
		printf(" Address Ori : %p\n", new_struct[i].str);
		printf(" Address Copy : %p\n\n", new_struct[i].copy);
		i++;
	}
	printf("\n");
	return (0);

}*/
