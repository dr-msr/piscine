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
#define PASS 0;
#define FAIL 1;

int ft_checkerror_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (!str[i])
		return (FAIL);
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '+' || str[i] == '-')
			return (FAIL);
		if (str[i] == ' ' 
			|| str[i] == '\f' 
			|| str[i] == '\n'
			|| str[i] == '\r' 
			|| str[i] == '\t' 
			|| str[i] == '\v')
			return (0);
		while (j < i)
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


char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	
	if (ft_checkerror_base(base_from) == 1)
		return (0)
	


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