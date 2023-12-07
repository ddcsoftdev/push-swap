/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_long.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddemarco <ddemarco@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 12:37:27 by ddemarco          #+#    #+#             */
/*   Updated: 2022/12/11 23:55:47 by ddemarco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../library/push_swap.h"

void	sort_copy(int *copy)
{
	int	index;
	int	index2;
	int	num;

	index = -1;
	while (++index < g_stacks.stack_a_len - 1)
	{
		index2 = -1;
		while (++index2 < g_stacks.stack_a_len - index - 1)
		{
			if (copy[index2] > copy[index2 + 1])
			{
				num = copy[index2];
				copy[index2] = copy[index2 + 1];
				copy[index2 + 1] = num;
			}
		}
	}
}

int	*create_copy(void)
{
	int	*copy;
	int	index;

	copy = malloc(g_stacks.stack_a_len * 4);
	if (!copy)
		return (NULL);
	index = -1;
	while (++index < g_stacks.stack_a_len)
		copy[index] = g_stacks.stack_a[index];
	sort_copy(copy);
	return (copy);
}

int	simplify_numbers(void)
{
	int	index;
	int	index2;
	int	*copy;

	copy = create_copy();
	if (!copy)
		return (0);
	index = -1;
	while (++index < g_stacks.stack_a_len)
	{
		index2 = -1;
		while (++index2 < g_stacks.stack_a_len)
		{
			if (g_stacks.stack_a[index] == copy[index2])
			{
				g_stacks.stack_a[index] = index2;
				break ;
			}
		}
	}
	free(copy);
	return (1);
}

void	sort_long(int size, int max_bits)
{
	int	index;
	int	index2;
	int	num;

	index = -1;
	while (++index < max_bits)
	{
		index2 = -1;
		while (++index2 < size)
		{
			num = g_stacks.stack_a[0];
			if (((num >> index) & 1) == 1)
				ra();
			else
				pb();
		}
		while (g_stacks.stack_b_len > 0)
			pa();
	}
}

void	solve_long(void)
{
	int	size;
	int	max_number;
	int	max_bits;

	if (!simplify_numbers())
		return ;
	size = g_stacks.stack_a_len;
	max_number = size - 1;
	max_bits = 0;
	while ((max_number >> max_bits) != 0)
		max_bits++;
	sort_long(size, max_bits);
}
