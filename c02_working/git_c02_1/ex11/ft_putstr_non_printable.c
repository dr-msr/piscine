#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			ft_putchar(str[i]);
		}
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[str[i] / 16]);
			ft_putchar("0123456789abcdef"[str[i] % 16]);
		}
		i++;
	}
}

int	main(void)
{
	char a[] = "Coucou\ntu vas bien";
	ft_putstr_non_printable(a);
	ft_putchar('\n');
	ft_putstr_non_printable("COucou tu vas bie\t\v\0n");
	ft_putchar('\n');
	return (0);
}

