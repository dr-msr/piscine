int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			i++;
		}
		else
		{
			count++;
			i++;
		}
	
	}

	if (count == 0 || str[0] == '\0') 
	{
		return (1);
	}
	else
	{
		return (0);
	}
}