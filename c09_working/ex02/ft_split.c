/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahim@42KL | drmsr <me@drmsr.dev>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:46:18 by mrahim@42KL |     #+#    #+#             */
/*   Updated: 2023/10/04 13:46:19 by mrahim@42KL |    ###   ########.KL       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		has_char(char c, char *str)
{
	while (*str)
	{
		if (*str++ == c)
			return (1);
	}
	return (0);
}

int		strs_l(char *str, char *charset)
{
	int	part;
	int count;

	part = 1;
	count = 0;
	while (*str)
	{
		if (!has_char(*str, charset) && part)
		{
			count++;
			part = 0;
		}
		else if (has_char(*str, charset))
			part = 1;
		str++;
	}
	return (count);
}

char	*ft_strdup(char *src, char *charset)
{
	char	*dest;
	char	*buffer;
	int		length;

	length = 0;
	buffer = src;
	while (*buffer && !has_char(*buffer++, charset))
		length++;
	dest = (char*)malloc(sizeof(*src) * length);
	buffer = dest;
	while (*src && length-- > 0)
		*buffer++ = *src++;
	*buffer = '\0';
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	char	**strs;
	char	**tmp;
	int		part;

	strs = (char**)malloc(strs_l(str, charset) * sizeof(*strs) + 1);
	tmp = strs;
	part = 1;
	while (*str)
	{
		if (!has_char(*str, charset) && part)
		{
			part = 0;
			*tmp = ft_strdup(str, charset);
			tmp++;
		}
		else if (has_char(*str, charset))
			part = 1;
		str++;
	}
	*tmp = 0;
	return (strs);
}

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
}