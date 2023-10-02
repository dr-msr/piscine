/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictionary.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aawgku-o <aawgku-o@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 18:43:38 by aawgku-o          #+#    #+#             */
/*   Updated: 2023/10/01 18:43:40 by aawgku-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DICTIONARY_H
#define DICTIONARY_H

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include <dirent.h>

extern char ***dict_array;

void ft_putstr(char *str);
char *ft_strcat(char *dest, char *src);
void init_dict();
int load_dict(char *dict);
int ft_strlen(char *str);
void trimTrailingWhitespace(char *str);
void trim_dict();
void intro();
int init_default_env();
int ft_strcmp(char *s1, char *s2);
int check_input_number(char *str);
int ft_check_number(char a);
void ft_construct_number(char *str, unsigned long long *output);
unsigned long long ft_atoi(char *str);
int length(long nb);
char *ft_itoa(int nb);
int ft_print_denominator(int level);
void print_base(int n, int level);
void init_print_trio(char *input, int level, int increment);

#endif
