/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahim <mrahim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:19:30 by mrahim            #+#    #+#             */
/*   Updated: 2023/09/20 15:35:08 by mrahim           ###   ########.KL       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	src_length;
	unsigned int	dest_length;
	unsigned int	j;
	unsigned int	k;

	src_length = ft_strlen(src);
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	dest_length = j;
	if (size == 0 || size < dest_length)
		return (src_length + size);
	k = 0;
	while (src[k] != '\0' && k < size - dest_length - 1)
	{
		dest[j] = src[k];
		j++;
		k++;
	}
	dest[j] = '\0';
	return (dest_length + src_length);
}
/*
#include <string.h>
#include <stdio.h>

int main() {	
	char dest[20] = "Hello, ";
	char *src = "world!";

	printf("\n## Before ft_strlcat:\n");
	printf("## Destination : %s\n", dest);
	printf("## Source :%s\n", src);

	int result2 = ft_strlcat(dest, src, 13);

	printf("\n## After ft_strlcat:\n");
	printf("## Destination : %s\n", dest);
	printf("## Result (return value of ft_strlcat) : %d\n\n", result2);
    return 0;
}*/
