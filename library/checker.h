/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddemarco <ddemarco@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:19:39 by ddemarco          #+#    #+#             */
/*   Updated: 2022/12/12 16:20:58 by ddemarco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "../ft_libft/libft.h"

# ifndef S_STACKS
#  define S_STACKS
typedef struct s_stacks
{
	int		*stack_a;
	int		stack_a_len;
	int		*stack_b;
	int		stack_b_len;
}	t_stacks;
# endif

//stacks
t_stacks	g_stacks;

#endif
