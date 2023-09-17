int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
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