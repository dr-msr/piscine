#include <unistd.h>
#include <stdio.h>

void    ft_putchar(char a)
{
    write(1,&a,1);
}

void ft_printgrid(int grid[4][4])
{
   int i = 0;
    int j;

    while (i < 4)
    {
        j = 0;
        while (j < 4)
        {
            ft_putchar(grid[i][j] + '0'); // Convert integer to character
            ft_putchar(' ');
            j++;
        }
        ft_putchar('\n');
        i++;
    }
}

int ft_checkdup (int grid[4][4], int posx, int posy, int value)
{
    int found;
    int i;
    found = 0;

    // check duplicates in row
    i = 0;
    while (i < 4)
    {
        if (grid[posy][i] == value)
            found++;

        i++;
    }

    // check duplicates in column
    i = 0;
    while (i < 4)
    {
        if (grid[i][posx] == value)
            found++;        
        i++;
    }

    // return if found
    if (found == 0)
        return (1);
    return (0);

}

int ft_checkrow(int xl, int xr)
{
   if (xl == 2 || xr == 2)
    {
    return (1);
    }
    else
    {
        return (1);
    }





}

void solve(int grid[4][4], int rowleft[], int rowright[])
{
    int x;
    int y;

    y = 0;
    int value;
    int checkrow;
    int checkdup;
    checkrow = 0;

    while (y < 4)
    {
    
        x = 0;
        value = 1;

        while (x < 4)
        {
            if (grid[y][x] == 0)
            {
                int current_value = 1; // Initialize the current value to 1
                checkdup = 0;
                while (current_value <= 4)
                    {
                    checkdup = ft_checkdup(grid, x, y, current_value);

                    if (checkdup == 1)
                    {
                        grid[y][x] = current_value;
                        value++;
                        break; // break out of the inner while loop when a non-duplicate value is found
                    }
                    current_value++;
                    }
            }

            x++; // move to next value in row.
        }

       checkrow = ft_checkrow(grid, x, y, rowleft[y], rowright[y]);
       if (checkrow == 1)
            y++;
            
    }

}

int main(void)
{
    int grid[4][4] = { {0} };

    int rowleft[] = {2, 1, 2, 2};
    int rowright[] = {4, 1, 2, 4};
   

    if (solvePuzzle(0, 0)) {
        printf("Solution:\n");
        printPuzzle();
    } else {
        printf("No solution exists.\n");
    }


    solve(grid, rowleft, rowright);
    ft_printgrid(grid);

    ft_putchar('\n');

    ft_putchar(rowleft[0] + '0');
    ft_putchar('\n');
    ft_putchar(rowright[0] + '0');
    ft_putchar('\n');

    return 0;
}