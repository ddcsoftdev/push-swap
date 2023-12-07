/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddemarco <ddemarco@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 18:13:32 by ddemarco          #+#    #+#             */
/*   Updated: 2022/11/19 11:51:34 by ddemarco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../library/push_swap.h"

int	get_str_digit_size(char *str)
{	
	int	index;
	int	start;
	int	size;

	index = -1;
	start = -1;
	size = 0;
	while (str[++index])
	{
		if (str[index] == ' ')
			continue ;
		if (start == -1)
			start = index;
		if (start != -1 && (str[index + 1] == '\0' || str[index + 1] == ' '))
		{
			size++;
			start = -1;
		}
	}
	return (size);
}
