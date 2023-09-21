#include <unistd.h>

void	ft_putchar(char a)
{
	write(1,&a,1);
}

void	ft_putstr(char *b)
{
	int i;

	i = 0;

	while (b[i] != '\0')
	{
		write(1,&b[i],1);
		i++;
	}
}

int	main(void)
{
	ft_putchar('a');
	ft_putstr("===================");

//	buat_bumbung();
//	buat_lantai();
//	buat_tiang();
	return(0);
}
