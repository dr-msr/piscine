int	ft_strlen(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int length;

	length = ft_strlen(src);
	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < size -1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (length);
}

#include <stdio.h>

int	main(void)
{
	char a[] = "Ayam is goreng. ";
	char b[] = "This is ayam. ";

	printf("\nThis is original.\n");
	printf("a : %s\n",a);
	printf("b : %s\n",b);

	int reqd;
	reqd = ft_strlcpy(b,a,15);
	printf("\nThis is after manipulation.\n");
	printf("a : %s\n",a);
	printf("b : %s\n",b);
	printf("Size : %d\n\n",reqd);
	return (0);
}
