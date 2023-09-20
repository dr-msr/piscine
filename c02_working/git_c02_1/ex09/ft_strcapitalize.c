/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahim <mrahim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 09:46:51 by mrahim            #+#    #+#             */
/*   Updated: 2023/09/20 16:01:57 by mrahim           ###   ########.KL       */
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
	int mark;

	i = 0;
	mark = 1;
	ft_strlowcase(str);

	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z'))
		{
			if (mark == 1)
			{
				str[i] = str[i] - 32;
				mark = 0;
			}
		} else if (str[i] >= '0' && str[i] <= '9')
		{
			mark = 0;
		}
		else
		{
			mark = 1;
		}
		i++;
	}
	return str;
}

int	main()
{
	char str[] = "this is mOhd sYamiruLah raHim";
	
	printf("%s\n",str);
	printf("%s\n",ft_strcapitalize(str));
	return (0);
}
