int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	diff;

	i = 0;
	diff = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		diff = s1[i] - s2[i];
		if (diff == 0)
		{
			i++;
		}
		else
		{
			return (diff);
		}
	}
	return (0);
}

int check_input_number(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}



int		ft_check_number(char a)
{
	if (a >= 48 && a <= 57)
	{
		return (1);
	}
	return (0);
}

void	ft_construct_number(char *str, unsigned long long *output)
{
	while (ft_check_number(*str) == 1)
	{
		if (*output == 0)
		{
			*output = (*str - '0');
		}
		else
		{
			*output = *output * 10 + (*str - '0');
		}
		str++;
	}
}
