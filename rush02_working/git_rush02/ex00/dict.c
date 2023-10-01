#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <dirent.h>
#include "dict.h"

char ***dict_array;

void init_dict()
{
    dict_array = (char ***) malloc(sizeof(char **) * 60);

	int row;
	row = 0;
	while (row <= 50)
	{
		dict_array[row] = (char **)malloc(sizeof(char *) * 2);
		dict_array[row][0] = (char *)malloc(sizeof(char) * 48);
		dict_array[row][1] = (char *)malloc(sizeof(char) * 48);
		row++;
	}
}

int load_dict(char *dict)
{
   int dict_open;
	int buffer_size;
	char dict_buffer[4097];
	int i;
	int row;
	int copy;
	
	char dict_path[20] = "./dict/";
	ft_strcat(dict_path,dict);

	if ((dict_open = open(dict_path, O_RDONLY)) == -1)
	{	
		printf("Error. Unable to locate file.");
		return (1);
	}

	if ((buffer_size = read(dict_open, dict_buffer, 4096)) == -1)
	{
		printf("Error. File not readable.");
		return (1);
	}

	dict_buffer[buffer_size] = '\0';

	i = 0;
	copy = 0;
	row = 0;

	while (i < buffer_size && row < 50)
	{
		copy = 0;
		while (dict_buffer[i] != ':')
		{
			/* clean up from dictionary : to skip whitespaces */
			/* ◦ You will trim the spaces before and after the value in the dictionary. */
			/* Syamirul todo */
			dict_array[row][0][copy] = dict_buffer[i]; 
			copy++;
			i++;
		}
		dict_array[row][0][copy] = '\0';
		i++;
		copy = 0;

		while (dict_buffer[i] != '\0' && ((dict_buffer[i] >= 9 && dict_buffer[i] <= 13) || dict_buffer[i] == 32)) 
    		i++;

		while (dict_buffer[i] != '\n' && i < buffer_size)
		{
			dict_array[row][1][copy] = dict_buffer[i];
			copy++;
			i++;
		}
		dict_array[row][1][copy] = '\0';
		row++;
		i++;
	}
	return (0);

}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void trimTrailingWhitespace(char *str) {
    int length = ft_strlen(str);
    int i = length - 1;

    while (i >= 0 && ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)) {
        i--;
    }
    str[i + 1] = '\0';
}

void trim_dict()
{
   int row;
	row = 0;
	while (row < 50)
	{
		trimTrailingWhitespace(dict_array[row][1]);
		row++;
	}
}
