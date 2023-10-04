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

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h> // testing purposes



int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_check_charset(char a, char *charset)
{
	int i;
	int char_len;

	char_len = ft_strlen(charset);

	i = 0;
	while (i < char_len)
	{
		if (a == charset[i] || a == '\0')
		{
			printf("%c == %c\n",a,charset[i]);
			return (1);
		}
		printf("%c =/= %c\n",a,charset[i]);
		i++;
	}
	return (0);
}

int	ft_count_size(char *str, char *charset)
{
	int	i = 0;
	int count_size = 0;
	int mark_char = 0;
	int mark_end = 0;

	while (str[i] != '\0')
	{
		if ((ft_check_charset(str[i],charset)) == 1 && mark_char != 0)
		{

			mark_end = i;
			count_size = count_size + (mark_end - mark_char);
			mark_char = 0;
			mark_end = 0;
			i++;


		} 
		else if ((ft_check_charset(str[i],charset)) == 1 && (mark_char == 0))
		{
			mark_char = i;
			i++;


		} else
		{
			i++;
		}
	}
	return (count_size);
}

char **ft_split(char *str, char *charset)
{
	// int	array_size;
	// int i;
	// int mark_char;
	// int mark_end;
	// int k;
	 char **array;
	// int count_array;
	// int c;
	// char *piece;
	int count_size;

	count_size =  ft_count_size(str,charset);

	printf("Count size total : %d\n", count_size);


	// i = 0;
	// count_array = 0;
	// mark_char = 0;

	 array = malloc(sizeof(char) * count_size + 1);

	// while (str[i] != '\0')
	// {
	// 	if ((ft_check_charset(str[i],charset)) == 1 && mark_char != 0)
	// 	{
	// 		mark_end = i;

	// 		array_size = mark_end - mark_char;

	// 		piece = malloc(sizeof(char) * array_size + 1);

	// 		k = mark_char;
	// 		c = 0;
	// 		while (k != i)
	// 		{
	// 			piece[c] = str[k];
	// 			k++;
	// 			c++;
	// 		}
	// 		piece[c] = '\0';

	// 		array[count_array] = &piece[c];
	// 		mark_char = 0;
	// 		mark_end = 0;
	// 		count_array++;
	// 		i++;


	// 	} 
	// 	else if ((ft_check_charset(str[i],charset)) == 1 && (mark_char == 0))
	// 	{
	// 		mark_char = i;
	// 		i++;


	// 	} else
	// 	{
	// 		i++;
	// 	}
	// }

	// array[count_array+1] = 0;
	 return (array);
}




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