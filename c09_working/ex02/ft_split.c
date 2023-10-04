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


int	ft_check(char a, char *charset)
{
	//printf("Check ft_check : %s = %c\n",charset,a);
	int i;
	i = 0;
	while (charset[i] != '\0')
	{
		if (charset[i] == a)
		{
			//printf("Check ft_check : %c = %c\n",charset[i],a);
			return (1);
		}
		i++;
	}
	return (0);
}
int	ft_wc(char *str, char *charset)
{
	int i;
	int mark_start;
	int total_length;


	i = 0;
	total_length = 0;
	mark_start = 0;


	while (str[i] != '\0')
	{
		if ((ft_check(str[i],charset)) == 1)
		{
			total_length = total_length + (i - mark_start) + 1;
			//printf("Update : TL %d, WC %d\n",total_length,word_count);
			mark_start = i + 1;
			i++;
		} 
		i++;
	}
	total_length = total_length + (i - mark_start) + 1;
	return (total_length);
}

void	ft_alloc(char *str, char *charset, char **array)
{
	int i;
	int mark_start;
	int array_count;


	i = 0;
	mark_start = 0;
	array_count = 0;


	while (str[i] != '\0')
	{
		if ((ft_check(str[i],charset)) == 1)
		{
			array[array_count] = malloc (sizeof (char) * (i - mark_start + 1));
			//printf("Update : TL %d, WC %d\n",total_length,word_count);
			mark_start = i + 1;
			array_count++;
			i++;
		} 
		i++;
	}
	array[array_count] = malloc (sizeof (char) * (i - mark_start + 1));
	array[array_count + 1] = malloc (sizeof (char));

}

void ft_map(char *str, char *charset, char **array)
{
	int i;
	int j;
	int array_count;

	i = 0;
	array_count = 0;
	j = 0;


	while (str[i] != '\0')
	{
		if ((ft_check(str[i],charset)) == 1)
		{
			array[array_count][j] = '\0';
			array_count++;
			j = 0;
			i++;
		} 
		array[array_count][j] = str[i];
		i++;
		j++;
	}
	array[array_count][i + 1] = '\0';
	array[array_count + 1][0] = '0';
	array[array_count + 1][1] = '\0';

}
char	**ft_split(char *str, char *charset)
{
	char **array;
	int total_length;

	total_length = ft_wc(str, charset) + 3;
	printf("Total length is : %d\n", total_length);
	array = malloc(sizeof(char) * total_length);
	ft_alloc(str, charset, array);
	ft_map(str, charset, array);

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