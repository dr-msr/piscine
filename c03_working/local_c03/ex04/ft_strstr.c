char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int mark;

	i = 0;
	mark = 0;

	if (to_find[0] == '\0')
	{
		return (str);
	}

	while (str[i] != '\0')
	{
		if (str[i] == to_find[i])
		{
			mark = i;
			j = 0;
			while (to_find[j] != '\0')
			{
				i++;
				j++;
			}
			return (str + mark);
		} else
		{
			i++;
		}
	i}
	return (0);	
}

 #include <string.h>
 #include <stdio.h>
 int main(void)
 {
     char *test1 = "Hello Beautiful World";
     char *test2 = "Beau";
     char *i = strstr(test1, test2);
     char *j = ft_strstr(test1, test2);
     printf("%s\n", i);
      printf("%s\n", j);
      return (0);
  }




