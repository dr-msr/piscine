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

#include <libc.h>
#include <stdio.h> // for testing

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
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
	dest[i] = '\0';
	return (dest);
}

typedef struct s_stock_str
	{
		int size;
		char *str;
		char *copy;
	} 	t_stock_str;

char	*ft_strdup(char *src)
{
	char	*dest;

	dest = malloc(sizeof(char) * ft_strlen(src));
	if (dest == NULL)
		return (0);
	ft_strcpy(dest, src);
	return (dest);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	t_stock_str		*new_struct;
	char 			*ori;
	char			*dup;
	int 			i;
	int				length_in;

	i = 0;
	while (av[i] != '\0')
	{
		length_in = ft_strlen(av[i]);
		new_struct = malloc(sizeof (t_stock_str));
		ori = ft_strdup(av[i]);
		dup = ft_strdup(av[i]);

		new_struct->size = length_in;
		new_struct->str = &ori;
		new_struct->copy = &dup;
		i++;
	}

	return (new_struct);

}

int	main(void)
{
	struct s_stock_str	*new_struct;


	char *input[] = { "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" };
	char **array = input;

	new_struct = ft_strs_to_tab(7, array);



	printf("Size : %d \n Ori Satu : %s \n Copy Satu : %s\n", new_struct[1].size, new_struct[1].str, new_struct[1].copy );


}
