/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddemarco <ddemarco@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 17:31:41 by ddemarco          #+#    #+#             */
/*   Updated: 2022/12/10 17:57:27 by ddemarco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../library/push_swap.h"

void	debug(void)
{
	int	index;

	index = -1;
	ft_printf("\nSTACK A (SIZE %d): ", g_stacks.stack_a_len);
	while (++index < g_stacks.stack_a_len)
		ft_printf("%d ", g_stacks.stack_a[index]);
	ft_printf("\nSTACK B (SIZE %d): ", g_stacks.stack_b_len);
	index = -1;
	while (++index < g_stacks.stack_b_len)
		ft_printf("%d ", g_stacks.stack_b[index]);
	ft_printf("\n");
}
