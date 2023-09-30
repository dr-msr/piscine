/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahim@42KL | drmsr <me@drmsr.dev>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 09:24:10 by mrahim@42KL |     #+#    #+#             */
/*   Updated: 2023/09/30 09:24:11 by mrahim@42KL |    ###   ########.KL       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include <dirent.h>



char	***dict_array;

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

char	*ft_strcat(char *dest, char *src)
{
	int	target;
	int	run;

	target = 0;
	while (dest[target] != '\0')
	{
		target++;
	}
	run = 0;
	while (src[run] != '\0')
	{
		dest[target] = src[run];
		target++;
		run++;
	}
	dest[target] = '\0';
	return (dest);
}

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


int	load_dict(char *dict)
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

void	trim_dict(void)
{
	int row;
	row = 0;
	while (row < 50)
	{
		trimTrailingWhitespace(dict_array[row][1]);
		row++;
	}
}

void 	intro()
{
	char *default_dir;

	ft_putstr("====================================================\n");
	ft_putstr("|               42KL Proudly Presents              |\n");
	ft_putstr("|             Number To Word Dictionary            |\n");
	ft_putstr("====================================================\n");
	ft_putstr("Default Dictionary :\n     ");

	default_dir = getenv("DEFAULT_DICT");

	ft_putstr(default_dir);
	ft_putstr("\nAvailable Dictionaries :\n");







	DIR* dObj;
    struct dirent* dir;

    dObj = opendir("./dict");

    if (dObj != NULL) {
        while ((dir = readdir(dObj)) != NULL) {
			    if (dir->d_name[0] == '.') 
				{
        			if (dir->d_name[1] == '\0') continue;
        			if (dir->d_name[1] == '.') 
					{
            			if (dir->d_name[2] == '\0') continue;
        			}
    			}
    			printf ("     %s\n", dir->d_name);
        }
        closedir(dObj);
    }

	ft_putstr("====================================================\n");
	ft_putstr("To change default dictionary, run: \n");
	ft_putstr("     --setDefault \"dictionary name\"\n");
	ft_putstr("     --setDefault \"numbers.dict\" (example)\n");
	ft_putstr("====================================================\n");





}

int	init_default_env()
{
		char *default_dict;

			if ((default_dict = getenv("DEFAULT_DICT"))== NULL)
		{
			if ((setenv("DEFAULT_DICT","numbers.dict",0)) == -1)
			{
				printf("Unable to set default dictionary. Exiting program.");
				return (-1);
			}
		}
		return (0);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	diff;

	i = 0;
	diff = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		diff = s1[i] - s2[i];
		if (diff == 0)
		{
			i++;
		}
		else
		{
			return (diff);
		}
	}
	return (0);
}

int check_input_number(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}



int		ft_check_number(char a)
{
	if (a >= 48 && a <= 57)
	{
		return (1);
	}
	return (0);
}

void	ft_construct_number(char *str, int *output)
{
	while (ft_check_number(*str) == 1)
	{
		if (*output == 0)
		{
			*output = (*str - '0');
		}
		else
		{
			*output = *output * 10 + (*str - '0');
		}
		str++;
	}
}

int		ft_atoi(char *str)
{
	unsigned int	counter;
	int				output;

	output = 0;
	counter = 0;
	while (*str != '\0')
	{
		if (*str == '-')
		{
			counter++;
		}
		if (ft_check_number(*str) == 1)
		{
			ft_construct_number(str, &output);
			break ;
		}
		str++;
	}
	if (counter % 2 != 0)
	{
		output = -output;
	}
	return (output);
}





int length(long nb)
{
	int length;

	length = 0;
	if (nb < 0)
	{
		nb = nb * -1;
		length++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		length++;
	}
	return (length);
}

char *ft_itoa(int nb)
{
	char *str;
	long n;
	int i;

	n = nb;
	i = length(n);
	if (!(str = (char *)malloc(sizeof(char) * (i + 1))))
		return (0);
	str[i--] = '\0';
	if (n == 0)
	{
		str[0] = 48;
		return (str);
	}
	if (n < 0)
	{
		str[0] = '-';
		n = n * -1;
	}
	while (n > 0)
	{
		str[i] = 48 + (n % 10);
		n = n / 10;
		i--;
	}
	return (str);
}


int	conversion(char *a)
{
	return (*a - '0');
}

void print_sa(int n)
{
	int row;
	row = 0;
	while (row <= 50 && n != 0)
	{
		if (ft_strcmp(ft_itoa(n),dict_array[row][0]) == 0)
			{
				ft_putstr(dict_array[row][1]);
			}
		row++;
	}
}

void print_puluh(int n)
{
	int row;
	row = 0;
	while (row <= 50 && n != 0)
	{
		if (ft_strcmp(ft_itoa(n),dict_array[row][0]) == 0)
			{
				ft_putstr(dict_array[row][1]);
			}
		row++;
	}
}

void print_ratus(int n)
{
	n = n / 100;

	int row;
	row = 0;
	while (row <= 50 && n != 0)
	{
		if (ft_strcmp(ft_itoa(n),dict_array[row][0]) == 0)
			{
				ft_putstr(dict_array[row][1]);
				ft_putstr(" hundred");

			}
		row++;
	}
}

void print_ribu(int n)
{
	n = n / 1000;

	int row;
	row = 0;
	while (row <= 50 && n != 0)
	{
		if (ft_strcmp(ft_itoa(n),dict_array[row][0]) == 0)
			{
				ft_putstr(dict_array[row][1]);
				ft_putstr(" thousands");

			}
		row++;
	}
}


void init_print_thousand(char *input)
{
	int input_len = ft_strlen(input);

	int sa_ri = input[input_len - 4] - '0';
	int pu_ri = input[input_len - 5] - '0';
	pu_ri = pu_ri * 10;

	int ra_ri = input[input_len - 6] - '0';
	ra_ri = ra_ri * 100;

	print_ratus(ra_ri);
	ft_putstr(" ");
	print_puluh(pu_ri);
	ft_putstr(" ");
	print_sa(sa_ri);
	ft_putstr(" ");
	ft_putstr("thousand");
}

void init_print_hundred(char *input)
{
	int input_len = ft_strlen(input);

	

	int sa = input[input_len - 1] - '0';
	int pu = input[input_len - 2] - '0';
	pu = pu * 10;

	int ra = input[input_len - 3] - '0';
	ra = ra * 100;
	print_ratus(ra);
	ft_putstr(" ");
	print_puluh(pu);
	ft_putstr(" ");
	print_sa(sa);
	

}


int	main(int argc, char *argv[])
{
	char *input;
	char *ref_dict;
	char *def_dict;

	if ((def_dict = getenv("DEFAULT_DICT")) == NULL)
	{
		if (init_default_env() == -1)
				return (-1);
	}



	if (argc == 1)
	{
		intro();
		return (1);
	}


	if (argc < 2 || argc > 3)
	{
		ft_putstr("Please input 1 or 2 arguments.");
		return (1);
	}
	if (argc == 2)
	{
		input = argv[1];
		ref_dict = getenv("DEFAULT_DICT");
	

	}
	if (argc == 3)
	{

		if (ft_strcmp(argv[1],"--setDefault") == 0)
		{
			if ((setenv("DEFAULT_DICT",argv[2],1)) == 0 )
			{
				printf("Succesfully changed default dictionary to %s.",getenv("DEFAULT_DICT"));
				return (0);
			}

		}
		ref_dict = argv[1];
		input = argv[2];
	}

	if (check_input_number(input) == 0)
	{
		ft_putstr("Please enter only numbers.");
		return (1);
	}


	init_dict();
	
	if (load_dict(ref_dict) == 1)
	{
		free(dict_array);
		//unsetenv("DEFAULT_DICT");
		return (1);
	}

	trim_dict();



	

	int raw = ft_atoi(input);

	if (raw > 999)
	{
		init_print_thousand(input);
	}
	init_print_hundred(input);

	


	

	







    // int input_len = ft_strlen(input);
    // int i = 0;

    // while (i < input_len)
    // {
    //     int row = 0;
    //     int match_length = 0;
    //     int best_match_length = 0;
    //     int best_match_index = -1;

    //     while (row < 50)
    //     {
    //         int j = 0;
    //         while (input[i + j] == dict_array[row][0][j])
    //         {
    //             j++;
    //             if (dict_array[row][0][j] == '\0')
    //             {
    //                 match_length = j;
    //                 break;
    //             }
    //         }

    //         if (match_length > best_match_length)
    //         {
    //             best_match_length = match_length;
    //             best_match_index = row;
    //         }

    //         row++;
    //     }

    //     if (best_match_index != -1)
    //     {
    //         printf("%s", dict_array[best_match_index][1]);
    //         i += best_match_length;
    //     }
    //     else
    //     {
    //         i++;
    //     }
    // }



	//int length;
	// int row;
	// int i;
	
	// //length = ft_strlen(input);
	// i = 0;
	// while (input[i] != '\0')
	// {
	// 	row = 0;

	// 	while (row < 50)
	// 	{
	// 	if (input[i] == dict_array[row][0][i])
	// 	{
	// 		printf("%s",dict_array[row][1]);
	// 		break;
	// 	}
	// 	row++;
	// 	}
	// 	i++;
	// }

	

// printf("\nKey : %s \n",dict_array[5][0]);
// printf("Value : %s \n\n",dict_array[5][1]);
	





//  int start;
//  int end;
//  start = 0;
//  end = 10;
//  while (start <= end)
//  {
//  	printf("%s : %s \n",dict_array[start][0], dict_array[start][1]);
//  	start++;
//  }
//   	printf("\n%s : %s \n",dict_array[7][0], dict_array[7][1]);


	free(dict_array);
//	unsetenv("DEFAULT_DICT");
	return (0);

}