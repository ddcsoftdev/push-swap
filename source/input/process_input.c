/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_input.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddemarco <ddemarco@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 19:05:48 by ddemarco          #+#    #+#             */
/*   Updated: 2022/12/12 00:31:45 by ddemarco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../library/push_swap.h"

int	get_args_len(int argc, char **argv)
{
	int	index;
	int	size;

	index = 1;
	size = 0;
	while (index < argc)
	{
		size += ft_strlen(argv[index]);
		index++;
	}
	return (size);
}

int	validate_if_str(char *str)
{
	int	index;

	index = -1;
	while (str[++index])
	{
		if (str[index] < '0' || str[index] > '9')
		{
			if (str[index] == ' ')
				continue ;
			if (str[index] == '-' && str[index + 1] >= '0'
				&& str[index + 1] <= '9')
				continue ;
			else
				return (0);
		}
	}
	return (1);
}

char	*extract_arg(char *dst, char *src, int *index2)
{
	int		index;

	index = 0;
	while (src[index])
	{
		dst[*index2] = src[index];
		index++;
		*index2 = *index2 + 1;
	}
	dst[*index2] = ' ';
	*index2 = *index2 + 1;
	return (dst);
}

char	*scan_and_append(char *str, int argc, char **argv)
{
	int	index;
	int	index2;

	index = 0;
	index2 = 0;
	while (++index < argc)
		extract_arg(str, argv[index], &index2);
	str[index2] = '\0';
	return (str);
}

char	*process_input(int argc, char **argv)
{
	char	*str;

	if (argc <= 1)
		return (NULL);
	str = malloc(get_args_len(argc, argv) + argc);
	if (!str)
		return (NULL);
	scan_and_append(str, argc, argv);
	return (str);
}
