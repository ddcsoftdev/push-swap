/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stacks.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddemarco <ddemarco@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 19:33:10 by ddemarco          #+#    #+#             */
/*   Updated: 2022/12/11 10:55:38 by ddemarco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../library/push_swap.h"

int	check_int_max_min(char *num)
{
	long long	number;

	number = (long long) ft_atoi(num);
	if (number > (long long)INT32_MAX)
		return (0);
	else if (number < (long long)INT32_MIN)
		return (0);
	return (1);
}

int	get_number(char *src, int *index, int start)
{
	char	*str;
	int		index2;
	int		num;

	str = malloc((*index - start) + 1);
	if (!str)
		return (-1);
	index2 = 0;
	while (start <= *index)
	{
		str[index2] = src[start];
		start++;
		index2++;
	}
	str[index2] = '\0';
	if (!check_int_max_min(str))
	{
		free(str);
		*index = -1;
		return (0);
	}
	num = ft_atoi(str);
	free(str);
	return (num);
}

int	str_to_int(int *dst, char *src)
{
	int	index;
	int	index2;
	int	start;

	index = -1;
	index2 = -1;
	start = -1;
	while (src[++index])
	{
		if (src[index] == ' ')
			continue ;
		if (start == -1)
			start = index;
		if (start != -1 && (src[index + 1] == '\0' || src[index + 1] == ' '))
		{
			dst[++index2] = get_number(src, &index, start);
			if (dst[index2] == 0 && index == -1)
				return (0);
			start = -1;
		}
	}
	return (1);
}

int	create_stacks(char *str)
{
	int	*stack;
	int	size;
	int	returnid;

	if (!validate_digits(str))
		return (0);
	size = get_str_digit_size(str);
	stack = ft_calloc(size, __SIZEOF_INT__);
	if (!stack || !str_to_int(stack, str))
		return (0);
	if (!validate_repeating(stack, size))
	{
		free(stack);
		return (0);
	}
	if (!fill_stacks(stack, size))
		returnid = 0;
	else
		returnid = 1;
	free(stack);
	return (returnid);
}
