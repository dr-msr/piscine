#include <stdlib.h>
#include "./ft_putchar.c"
#include "./rush00.c"
// #include "./rush01.c"
// #include "./rush02.c"
// #include "./rush03.c"
// #include "./rush04.c"

void    ft_putchar(char a);
void    rush(int a, int b);

int     convert(char *b)
{
    int i;
    i = 0;
    int output;
    output = 0;

    while (b[i] != '\0')
    {
        if ( (b[i] < '0') | (b[i] >= '9'))
        {
            write(1,"Invalid character detected. ",28);
            return (0);
        } else
        {
        output *= 10;
        output += b[i] - '0';
        i++;
        }    
    }
    return (output);
}

int main(int argc, char *argv[])
{
    if (argc <= 2){
        write(1,"Please provide argument X Y\n",28);
        return(0);
    } else {

        int ax = convert(argv[1]);
        int ay = convert(argv[2]);

        rush(ax,ay);
        return (0);

    }
}
