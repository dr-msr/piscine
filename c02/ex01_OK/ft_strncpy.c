/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahim <mrahim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 09:17:21 by mrahim            #+#    #+#             */
/*   Updated: 2023/09/21 10:33:20 by mrahim           ###   ########.KL       */
/*   Updated: 2023/09/21 10:28:33 by mrahim           ###   ########.KL       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
