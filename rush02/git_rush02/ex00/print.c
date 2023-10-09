/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahim@42KL | drmsr <me@drmsr.dev>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 18:25:38 by mrahim@42KL |     #+#    #+#             */
/*   Updated: 2023/10/01 18:25:40 by mrahim@42KL |    ###   ########.KL       */
/*                                                                            */
/* ************************************************************************** */
int	ft_print_denominator(int level)
{
	int		row;
	char	str[50];
	char	*zero;
	int		i;

str[50] = "1";
zero = "000";
	if (level == 0)
	{
		ft_strcat(str, "00");
	}
	if (level == 1)
	{
		ft_strcat(str, "000");
	}
	i = 2;
	while (i <= level)
	{
		ft_strcat(str, zero);
		i++;
	}
row = 0;
	while (row <= 50)
	{
		if (ft_strcmp(str, dict_array[row][0]) == 0)
		{
			ft_putstr(dict_array[row][1]);
			ft_putstr(" ");

		}
		row++;
	}
	return (0);
}

void	print_base(int n, int level)
{
	int	row;

	row = 0;
	while (row <= 50 && n != 0)
	{
		if (ft_strcmp(ft_itoa(n), dict_array[row][0]) == 0)
		{
			ft_putstr(dict_array[row][1]);
			ft_putstr(" ");
			if (level == 100)
				ft_putstr("hundred ");
		}
		row++;
	}
}

void	init_print_trio(char *input, int level, int increment)
{
	int	row;
	int	sa;
	int	pu;
	int	ra;
	int	input_len;
	int	belas;

	input_len = ft_strlen(input);

	sa = input[input_len - ((increment * 3) + 1)] - '0';
	pu = input[input_len - ((increment * 3) + 2)] - '0';
	ra = input[input_len - ((increment * 3) + 3)] - '0';
	if (level == 100)
	{
		print_base(ra, 100);
		init_print_trio(input, 10, increment);
	}
	if (level == 10)
	{

		if (((pu * 10) + sa) >= 11 && ((pu * 10) + sa) <= 19)
		{

			belas = (pu * 10) + sa;
			row = 0;
			while (row < 50)
			{
				if (ft_strcmp(ft_itoa(belas), dict_array[row][0]) == 0)
				{
					ft_putstr(dict_array[row][1]);
					ft_putstr(" ");

				}
				row++;
			}
		}
		else
		{
		row = 0;
			while (row < 50 && pu != 0)
			{
				if (ft_strcmp(ft_itoa(pu * 10), dict_array[row][0]) == 0)
				{
					ft_putstr(dict_array[row][1]);
					ft_putstr(" ");
				}
				row++;
			}
			if (sa != 0)
				print_base(sa, 1);
		}
	}
	if (level == 1)
		print_base(sa, 1);
}
