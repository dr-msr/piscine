/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahim@42KL | drmsr <me@drmsr.dev>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:46:18 by mrahim@42KL |     #+#    #+#             */
/*   Updated: 2023/10/05 15:59:56 by mrahim@42KL |    ###   ########.KL       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_check(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	array_count(char *str, char *charset)
{
	int	part;
	int	count;
	int	i;

	part = 1;
	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if ((ft_check(str[i], charset) == 0) && (part == 1))
		{
			count++;
			part = 0;
		}
		else if ((ft_check(str[i], charset)) == 1)
			part = 1;
		i++;
	}
	return (count);
}

char	*ft_map_array(char *src, char *charset)
{
	char	*array;
	char	*buffer;
	int		length;

	length = 0;
	buffer = src;
	while (*buffer && !ft_check(*buffer++, charset))
		length++;
	array = (char *) malloc(sizeof(*src) * length);
	buffer = array;
	while (*src && length-- > 0)
		*buffer++ = *src++;
	*buffer = '\0';
	return (array);
}

char	**ft_split(char *str, char *charset)
{
	char	**array;
	char	**tmp;
	int		part;

	array = (char **) malloc(array_count(str, charset) * sizeof(*array) + 1);
	tmp = array;
	part = 1;
	while (*str)
	{
		if (!ft_check(*str, charset) && part)
		{
			part = 0;
			*tmp = ft_map_array(str, charset);
			tmp++;
		}
		else if (ft_check(*str, charset))
			part = 1;
		str++;
	}
	*tmp = 0;
	return (array);
}
/*
#include <stdio.h>

int	main(int argc, char *argv[])
{
	char *charset;
	char *string;
	char **array;

	if (argc != 3)
	{
		printf("Only 2 arguments required.\n");
		return (0);
	}
		
	string = argv[1];
	charset = argv[2];

	array = ft_split(string, charset);

	printf("Original String : %s\n", string);
	printf("Charset : %s\n", charset);

	int i = 0;
	while (array[i] != 0)
	{
		printf(" String[%d] : %s\n", i, array[i]);
		i++;
	}
	return (0);
}*/
