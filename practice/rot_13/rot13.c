// Assignment name  : rot_13
// Expected files   : rot_13.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes a string and displays it, replacing each of its
// letters by the letter 13 spaces ahead in alphabetical order.

// 'z' becomes 'm' and 'Z' becomes 'M'. Case remains unaffected.

// The output will be followed by a newline.

// If the number of arguments is not 1, the program displays a newline.

// Example:

// $>./rot_13 "abc"
// nop
// $>./rot_13 "My horse is Amazing." | cat -e
// Zl ubefr vf Nznmvat.$
// $>./rot_13 "AkjhZ zLKIJz , 23y " | cat -e
// NxwuM mYXVWm , 23l $
// $>./rot_13 | cat -e
// $
// $>
// $>./rot_13 "" | cat -e
// $
// $>

#include <unistd.h>

void	ft_putchar(char a)
{
	write (1, &a, 1);
}

char	ft_convert(char a)
{
	char output;
	output = a;
	if (a >= 'a' && a <= 'm')
		output = a + 13;
	if (a >= 'n' && a <= 'z')
		output = a - 13;
	if (a >= 'A' && a <= 'M')
		output = a + 13;
	if (a >= 'N' && a <= 'Z')
		output = a - 13;
	return (output);	
}

int	main(int argc,char *argv[])
{
	if (argc != 2)
	{
		ft_putchar('\n');
		return (1);
	}

	char *str;
	str = argv[1];

	int i;
	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(ft_convert(str[i]));
		i++;
	}
	ft_putchar('\n');
	return (0);
}