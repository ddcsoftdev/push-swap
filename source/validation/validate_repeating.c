/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_repeating.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddemarco <ddemarco@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 19:40:38 by ddemarco          #+#    #+#             */
/*   Updated: 2022/12/10 13:24:03 by ddemarco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../library/push_swap.h"

int	compare_numbers(int *orig, int *copy, int size)
{
	int	index;
	int	index2;
	int	flag;

	index = -1;
	while (++index < size)
	{
		index2 = -1;
		flag = 0;
		while (++index2 < size)
		{		
			if (copy[index2] == orig[index] && !flag)
				flag = 1;
			else if (copy[index2] == orig[index] && flag)
				return (0);
		}
	}
	return (1);
}

int	validate_repeating(int *stack, int size)
{
	int	*copy;
	int	index;
	int	returnid;

	copy = malloc(size);
	if (!copy)
		return (0);
	index = -1;
	while (++index < size)
		copy[index] = stack[index];
	if (!compare_numbers(stack, copy, size))
		returnid = 0;
	else
		returnid = 1;
	free (copy);
	return (returnid);
}
