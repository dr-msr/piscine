#include "./git_c01/ex02/ft_swap.c"
#include "./ft_putchar.c"
#include "./git_c01/ex03/ft_div_mod.c"

void	ft_swap(int *a, int *b);
void	ft_putchar(char a);
void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_putspace(void)
{
	ft_putchar('\n');
}

void ex01_(void)
{
   	int satu = '1';
   	int dua = '2';

   	ft_putchar(satu);
   	ft_putchar('\n');
   	ft_putchar(dua);
   	ft_putchar('\n');
	
   	ft_swap(&satu,&dua);
   	ft_putchar(satu);
   	ft_putchar('\n');
   	ft_putchar(dua);
}

void ex03_()
{
	int a;
	int b;
	int bahagi;
	int baki;
	
	bahagi = '0';
	baki = '0';

	a = 48;
	b = 2;

	ft_putchar(a);
	ft_putchar(',');
	ft_putchar(b);
	ft_putspace();

	ft_div_mod(a,b,&bahagi,&baki);

	ft_putchar(bahagi);
	ft_putchar(',');
	ft_putchar(baki);
}




int	main(void)
{
//	ex01_();
	ex03_();
	return (0);
}


