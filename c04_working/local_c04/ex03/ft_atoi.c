/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahim <mrahim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:36:13 by mrahim            #+#    #+#             */
/*   Updated: 2023/09/20 14:40:35 by mrahim           ###   ########.KL       */
/*                                                                            */
/* ************************************************************************** */

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1,str[i],1);
		i++;
	}
}

void	trim_sign(char *str)
{
	int i;
	int count;
	char trimmed[];

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] != " " || str[i] != "-" || str[i] != "+" || (str[i] < '9' && str[i] >= '0'))
		{
		trimmed[i] = str[i];
		i++;
		}	

	}
	ft_putstr(*trimmed);
}


int	ft_atoi(char *str)
{
	trim_sign(str);
}


int main(void)
{
	char *a = " ---+--+1234ab567";
//	ft_atoi(a);
	ft_putstr(a);
	return (0);
}
