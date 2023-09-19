char *ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;

	if (to_find[0] == '\0') // first, check if to_find is empty, will return str
		return (str);

	while (str[i] != '\0') // loop through str until end
	{
		j = 0; // resets back j counter to 0
		while (str[i +j] != '\0' && str [i + j] == to_find[j]) // loop through each char in str and to_find
		{
			if (to_find[j + 1] == '\0') // if to_find complete, return the str address at i mark
				return (&str[i]);
			j++; // if not complete, move to next j
		}
		i++; 
	}
	return (0); // if able to run through the codes (no match found), return null
}

#include <string.h>
#include <stdio.h>

int	main()
{
	char *a = "This is ayam goreng";
	char *b = "ayam";

	printf("%s\n",ft_strstr(a,b));
	return (0);
}