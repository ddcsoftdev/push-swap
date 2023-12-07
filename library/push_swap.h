/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddemarco <ddemarco@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 15:22:06 by ddemarco          #+#    #+#             */
/*   Updated: 2022/12/11 10:53:27 by ddemarco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

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

# ifndef ERROR_FD
#  define ERROR_FD 2
# endif

# ifndef SHORTEST_LIST
#  define SHORTEST_LIST 2
# endif

# ifndef SHORT_LIST
#  define SHORT_LIST 3
# endif

# ifndef MED_LIST
#  define MED_LIST 5
# endif

//stacks
t_stacks	g_stacks;
//interchanges first two elements on top of stack a
//does nothing if stack a <= 1 
void	sa(void);
//interchanges first two elements on top of stack b
//does nothing if stack b <= 1
void	sb(void);
//swap a and swap b
void	ss(void);
//puts the first element of stack b and puts it on top of stack a
//does nothing if stack b is empty
void	pa(void);
//puts first elements of stack and puts it on top of stack b
//does nothing if stack a is empty
void	pb(void);
//offsets elements of stack a forward where element 0 becomes last
void	ra(void);
//offsets elements of stack b forward where element 0 becomes last
void	rb(void);
//ra and rb
void	rr(void);
//offsets elements of stack a backwards where last element becomes index 0
void	rra(void);
//offsets elements of stack b backwards where the last element becomes index 0
void	rrb(void);
//rra and rrb
void	rrr(void);

int		get_str_digit_size(char *str);

int		validate_digits(char *str);

int		validate_repeating(int *stack, int size);

char	*process_input(int argc, char **argv);

int		create_stacks(char *str);

int		fill_stacks(int *stack, int size);

void	error_handle(void);

void	solve_stack(void);

void	solve_short(void);

void	solve_medium(void);

void	solve_long(void);

void	debug(void);

#endif
