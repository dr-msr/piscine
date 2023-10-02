/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahim@42KL | drmsr <me@drmsr.dev>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:18:57 by mrahim@42KL |     #+#    #+#             */
/*   Updated: 2023/10/02 10:33:45 by mrahim@42KL |    ###   ########.KL       */
/*                                                                            */
/* ************************************************************************** */

#ifndef 	FT_BOOLEAN_H
# define 	FT_BOOLEAN_H
# include 	<unistd.h>

typedef	int	t_bool;

# define	EVEN(nbr)	nbr % 2 == 0
# define	TRUE		0
# define	FALSE		1
# define	EVEN_MSG	"I have an even number of arguments."
# define	ODD_MSG		"I have an odd number of arguments."
# define	SUCCESS		0

#endif



