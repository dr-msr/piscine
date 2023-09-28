/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahim@42KL | drmsr <me@drmsr.dev>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 08:31:24 by mrahim@42KL |     #+#    #+#             */
/*   Updated: 2023/09/28 08:31:29 by mrahim@42KL |    ###   ########.KL       */
/*                                                                            */
/* ************************************************************************** */

int ft_convert_nbr(char *str, int *mark)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32) // whitespaces
		i++;
	while (str[i] != '\0' && (str[i] == 43 || str[i] == 45)) // check + or -
	{
		if (str[i] == 45)
		{
			count++;
		}
	i++;
	}
	*mark = i;
	if (count % 2 == 1)
		return (-1);
	return (1);
}



int ft_checkerror_base(char *str)
/*
If there’s an invalid argument, the function should return 0. Examples of invalid
arguments :
◦base is empty or size of 1;
◦base contains the same character twice ;
◦base contains + or - or whitespaces;
*/
{
	int	i;
	int	j;

	i = 0;
	if (str[0] == '\0') // empty
		return (0);
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '+' || str[i] == '-') // any + or -
			return (0);
		if ((str[i] >= 9 && str[i] <= 13) || str[i] == 32) // any whitespace
			return (0);
		while (j < i) // duplicate character
		{
			if (str[j] == str[i])
				return (0);
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_convert_to_int(char input, char *base_from)
{
	int	int_in;


	int_in = 0;
	while (base_from != '\0' && base_from[int_in] != input)
		int_in++;
	
	return (int_in);

}

char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int mark_nbr;
	int sign_nbr;
	int	length_nbr;

	if (ft_checkerror_base(base_from) == 0)
		return (0);

	if (ft_checkerror_base(base_to) == 0)
		return (0);

	sign_nbr = ft_convert_nbr(nbr, mark_nbr);

	length_nbr = ft_strlen(nbr[mark_nbr]);

	int i;
	while (nbr[i] != '\0')




	

	
	


}


int	main(void)
{
	char*	base_dec = "0123456789"; // decimal
	char*	base_bin = "01"; // binary
//	char*	base_hex = "0123456789ABCDEF"; // hexa
//	char*	base_oct = "poneyvif"; // octal

	char	*src = "This Is Mohd Syamirulah Rahim.";

	printf("Converted : %s",ft_convert_base(src, base_dec, base_bin));

}

/*
If there’s an invalid argument, the function should return 0. Examples of invalid
arguments :
◦base is empty or size of 1;
◦base contains the same character twice ;
◦base contains + or - or whitespaces;
*/