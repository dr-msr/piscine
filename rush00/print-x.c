#include <unistd.h>
#include <stdlib.h>

void ft_putchar(char c)
{
    write(1, &c, 1) ;
}

void printx(int x)
{
    int ix;
    ix = 1;

    if (x == 1) {
        ft_putchar('A');
    } else if (x == 2) {
        ft_putchar('A');
        ft_putchar('C');
    } else 
    {  
    while (ix <= x)
    {
        if (ix == 1) {
            ft_putchar('A');
            ix++;
        } else if (ix == x) {
            ft_putchar('C');
            return;
        } else {
            ft_putchar('B');
            ix++;
        }      
    }
    }
}

void ft_rush(int a, int b)
{
    if (a <= 0 | b <= 0) {
        write(2,"Invalid input. Please use only positive value integer.\n",55);
        return;
    }
    if (b == 1){
        printx(a);
        return;
    } else if (b == 2)
    {
        printx(a);
        ft_putchar('\n');
        printx(a);
        return;
    } else 
    {
        printx(a);
        int c = 2;
        while (c <= b) {
            ft_putchar('\n');
            c++;
        }
        printx(a);
    }
    }

int main(int argc, char *argv[])
{
    

    char *x = argv[1];
    int numx = atoi(x);

    char *y = argv[2];
    int numy = atoi(y);


    if (argc <= 2){
        write(2,"Please provide argument X Y\n",28);
        return(0);
    } else {
        ft_rush(numx,numy);
        return (0);
    }

}