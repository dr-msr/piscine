/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahim <mrahim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 09:46:51 by mrahim            #+#    #+#             */
/*   Updated: 2023/09/19 12:43:12 by mrahim           ###   ########.KL       */
/*                                                                            */
/* ************************************************************************** */

 #include <unistd.h>
#include <stdio.h>

void ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
}



char *ft_strcapitalize(char *str)
{
	int	i;
	i = 0;

	ft_strlowcase(str);

	while (str[i] != '\0')
	{
		if ((str[i] <= 64) || (str[i] >= 91))
		{
			if ((str[i] >= 97) && (str[i] <= 122))
			str[i] = str[i] - 32;
			i++;	
		}
		i++;
	}
	return str;
}

int	main()
{
	char str[] = "this is mOhd sYamiruLah raHim";
	
	printf("%s",str);
	printf("%s","\n");
	printf("%s\n",ft_strcapitalize(str));
	return (0);
}
