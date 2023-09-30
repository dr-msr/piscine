/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahim@42KL | drmsr <me@drmsr.dev>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 09:24:10 by mrahim@42KL |     #+#    #+#             */
/*   Updated: 2023/09/30 09:24:11 by mrahim@42KL |    ###   ########.KL       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>


char	***dict_array;

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

char	*ft_strcat(char *dest, char *src)
{
	int	target;
	int	run;

	target = 0;
	while (dest[target] != '\0')
	{
		target++;
	}
	run = 0;
	while (src[run] != '\0')
	{
		dest[target] = src[run];
		target++;
		run++;
	}
	dest[target] = '\0';
	return (dest);
}

void init_dict()
{
	dict_array = (char ***) malloc(sizeof(char **) * 60);

	int row;
	row = 0;
	while (row <= 50)
	{
		dict_array[row] = (char **)malloc(sizeof(char *) * 2);
		dict_array[row][0] = (char *)malloc(sizeof(char) * 48);
		dict_array[row][1] = (char *)malloc(sizeof(char) * 48);
		row++;
	}

}

void	load_dict(char *dict)
{
	int dict_open;
	int buffer_size;
	char dict_buffer[4097];
	int i;
	int row;
	int copy;

	dict_open = open(dict, O_RDONLY);
	buffer_size = read(dict_open, dict_buffer, 4096);

	dict_buffer[buffer_size] = '\0';

	i = 0;
	copy = 0;
	row = 0;

	while (i < buffer_size && row < 50)
	{
		copy = 0;
		while (dict_buffer[i] != ':')
		{
			/* clean up from dictionary : to skip whitespaces */
			/* ◦ You will trim the spaces before and after the value in the dictionary. */
			/* Syamirul todo */
			dict_array[row][0][copy] = dict_buffer[i]; 
			copy++;
			i++;
		}
		dict_array[row][0][copy] = '\0';
		i++;
		copy = 0;
		while (dict_buffer[i] != '\n' && i < buffer_size)
		{
			/* clean up from dictionary : to skip whitespaces */
			/* ◦ You will trim the spaces before and after the value in the dictionary. */
			/* Syamirul todo */
			dict_array[row][1][copy] = dict_buffer[i];
			copy++;
			i++;
		}
		dict_array[row][1][copy] = '\0';
		row++;
		i++;
	}

}

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

int	main(int argc, char *argv[])
{
	char *input;
	char *ref_dict;

	if (argc < 2 || argc > 3)
	{
		ft_putstr("Please input 1 or 2 arguments.");
		return (1);
	}
	if (argc == 2)
	{
		input = argv[1];
		ref_dict = "numbers.dict";
	}
	if (argc == 3)
	{
		ref_dict = argv[1];
		input = argv[2];
	}
	init_dict();
	load_dict(ref_dict);


	//int length;
	int row;
	int i;
	
	//length = ft_strlen(input);
	i = 0;
	while (input[i] != '\0')
	{
		row = 0;

		while (row < 50)
		{
		if (input[i] == dict_array[row][0][i])
		{
			printf("%s",dict_array[row][1]);
			break;
		}
		row++;
		}
		i++;
	}

	

// printf("\nKey : %s \n",dict_array[5][0]);
// printf("Value : %s \n\n",dict_array[5][1]);
	





// int start;
// int end;
// start = 0;
// end = 5;
// while (start <= end)
// {
// 	printf("%s : %s \n",dict_array[start][0], dict_array[start][1]);
// 	start++;
// }

	free(dict_array);
	return (0);

}