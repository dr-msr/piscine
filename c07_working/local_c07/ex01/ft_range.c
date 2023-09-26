# include <stdlib.h>
# include <stdio.h>

int	*ft_range(int min, int max)
{
	int *array;
	int i;

	if (min >= max)
		return NULL;

	array = malloc((max - min) * sizeof(int));
	
	if (array == NULL)
		return (0);

	i = 0;
	while (i < (max - min))
	{
		array[i] = min + i;
		i++;
	}

	return (array);

}

int	main(void)
{
	int	*array;
	int	min;
	int	max;
	int	i;

	min = 1;
	max = 100;

	array = ft_range(min, max);
	i = 0;

	while (i < (max - min))
	{
		printf("%d", array[i]);
		i++;
	}
	free(array);
	return (0);
}