// Assignment name  : ft_itoa
// Expected files   : ft_itoa.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------

// Write a function that takes an int and converts it to a null-terminated string.
// The function returns the result in a char array that you must allocate.

// Your function must be declared as follows:

// char	*ft_itoa(int nbr);

#include <stdio.h>
#include <stdlib.h>

int		ft_count(int n)
{
	int count;
	count = 0;

	if (n < 0)
	{
		n = n * -1;
		count++;
	}

	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);

}

char *ft_itoa(int nbr)
{
 	int length;
	char *output;
	int i;

	length = ft_count(nbr);
	output = malloc((length + 1) * sizeof(char));
	i = length - 1;
	if (nbr < 0)
	{
		nbr = nbr * -1;
		output[0] = '-';
	}
	while (nbr > 0)
	{
		output[i] = 48 + (nbr % 10);
		nbr = nbr / 10;
		i--;
	}
	output[length] = '\0';
	return (output);
}

int	main(void)
{
	char *output;
	int input;
	int length;

	input = 12;
	length = ft_count(input);

	output = ft_itoa(input);
	printf("%s", output);
	return (0);
}