unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	int size_i;
	size_i = size;

	int src_length;
	int dest_length;
	int i;
	int j;
	int k;


	// count size source 

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	src_length = i;

	// count size destination
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	dest_length = j;

	// check if size is 0 or not enough space in destination, returns total size required
	if (size_i == 0 || size_i < dest_length)
		return (src_length + size_i);
	

	k = 0;
	while (src[k] != '\0' && k < size_i - dest_length - 1) // if enough space, copy the src into end of dest, reserve 1 for null
	{
		dest[j] = src[k];
		j++;
		k++;
	}
	dest[j] = '\0'; //terminating the whole string with null
	return (dest_length + src_length); // returns new size
}

/* #include <string.h>
#include <stdio.h>

int main() {

	char a[] = "This is ayam goreng.";
	char b[] = "Ayam goreng is sedap.";
	
	printf("%d\n", ft_strlcat(a,b,25));
	printf("%s\n", a);
} */