unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	int size_i;
	size_i = size;

	int src_length;
	int dest_length;
	int i;
	int j;
	int k;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	src_length = i;

	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	dest_length = j;

	if (size_i == 0 || size_i < dest_length)
		return (src_length + size_i);
	
	k = 0;
	while (src[k] != '\0' && k < size_i - dest_length - 1)
	{
		dest[j] = src[k];
		j++;
		k++;
	}
	dest[j] = '\0';
	return (dest_length + src_length);
}

#include <string.h>
#include <stdio.h>

int main() {
    char destination[20] = "Hello, ";
    char *source = "world!";

    printf("Before strlcat:\n");
    printf("Destination: %s\n", destination);
    printf("Source: %s\n", source);

    int result = strlcat(destination, source, 10);

    printf("\nAfter strlcat:\n");
    printf("Destination: %s\n", destination);
    printf("Result (return value of strlcat): %d\n", result);
	
	char dest[20] = "Hello, ";
	char *src = "world!";

	printf("## Before ft_strlcat:\n");
	printf("## Destination : %s\n", dest);
	printf(
    return 0;
}
