#include <stdlib.h>

int ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while (str[i] != '\0')
		i++;
	return i;
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dest;


	dest = malloc(sizeof(char) * ft_strlen(src));
	if (dest == NULL)
		return (0);
	ft_strcpy(dest, src);
	return (dest);
}

# include <stdio.h>

int	main(void)
{
	char *src;

	src = "This is me.";

	printf("%s",ft_strdup(src));
	return (0);


}
