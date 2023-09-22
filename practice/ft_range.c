#include <stdio.h>
#include <stdlib.h>

int	ft_size(int a, int b)
{
	return (b - a);
}

int	*ft_range(int start, int end)
{
	int *range;

	range = malloc(ft_size(start,end) * sizeof(int));

	int i;
	int j;
	i = start;
	j = 0;
	while (i < ft_size(start,end))
	{
		range[j] = i;
		i++;
		j++;
	}

	return (range);

}

#include <unistd.h>
#include <stdlib.h>
//#include <stdio.h>

int	main(void)
{
	int	start;
	int	end;
	int *arr;
	int i;


	start = -5;
	end = 10;


	arr = ft_range(start,end);

	printf("\nStart : %d\n",start);
	printf("End : %d\n",end);
	printf("Size : %d\n",ft_size(start,end));
	printf("\nBegin Array :\n");

	i = 0;
	while (i <= ft_size(start,end))
	{
//		printf("%d\n",i);
		printf("%d\n",arr[i]);
		i++;
	}

	return (0);
}
