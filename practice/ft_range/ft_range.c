// Assignment name  : ft_range
// Expected files   : ft_range.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------

// Write the following function:

// int     *ft_range(int start, int end);

// It must allocate (with malloc()) an array of integers, fill it with consecutive
// values that begin at start and end at end (Including start and end !), then
// return a pointer to the first value of the array.

// Examples:

// - With (1, 3) you will return an array containing 1, 2 and 3.
// - With (-1, 2) you will return an array containing -1, 0, 1 and 2.
// - With (0, 0) you will return an array containing 0.
// - With (0, -3) you will return an array containing 0, -1, -2 and -3.

#include <stdlib.h>
#include <stdio.h>

int ft_get_size(int a, int b)
{
	if (b > a)
		return (b - a);
	return (a - b);
}

int *ft_range(int start, int end)
{
	int i;
	int *array;
	int size;

	size = ft_get_size(start, end);
	array = malloc(size * sizeof(int));

	if (array == NULL)
		return (0);
	if (end > start)
	{
		i = 0;
		while (i <= size)
		{
			array[i] = start;
			i++;
			start++;
		}
		return (array);
	}
	else
	{
		i = 0;
		while (i <= size)
		{
			array[i] = start;
			i++;
			start--;
		}
		return (array);
	}
}

int	main() 
{
	int *array;
	int start;
	int end;

	start = 3;
	end = -10;

	array = ft_range(start, end);

	int i = 0;
	while (i <= ft_get_size(start, end))
	{
		printf("%d\n", array[i]);
		i++;
	}
	return (0);
}