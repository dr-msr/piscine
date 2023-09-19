/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahim <mrahim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:34:30 by mrahim            #+#    #+#             */
/*   Updated: 2023/09/18 10:41:00 by mrahim           ###   ########.KL       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	target;
	int	run;

	target = 0;
	while (dest[target] != '\0')
	{
		target++;
	}
	run = 0;
	while (src[run] != '\0' && run < nb)
	{
		dest[target] = src[run];
		target++;
		run++;
	}
	dest[target] = '\0';
	return (dest);
}	
