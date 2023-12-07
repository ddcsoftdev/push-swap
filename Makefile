# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ddemarco <ddemarco@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/20 17:39:57 by ddemarco          #+#    #+#              #
#    Updated: 2022/12/12 16:27:17 by ddemarco         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = library/push_swap.a

NAME_B = library/checker.a

EXE = push_swap

EXE_B = checker

LIBFT = ft_libft/libft.a

CC = gcc

FLAGS =  -Wall -Wextra -Werror

INCLUDES = library/push_swap.h ft_libft/libft.a

INCLUDES_B =  library/checker.h ft_libft/libft.a

SRCS = 		source/push_swap.c\
			source/commands/push_commands.c\
			source/commands/swap_commands.c\
			source/commands/rotate_commands.c\
			source/commands/rrotate_commands.c\
			source/utils/stack_utils.c\
			source/validation/validate_digits.c\
			source/validation/validate_repeating.c\
			source/input/process_input.c\
			source/stacks/create_stacks.c\
			source/stacks/fill_stacks.c\
			source/error/error.c\
			source/debug/debug.c\
			source/solve/solve.c\
			source/solve/solve_short.c\
			source/solve/solve_medium.c\
			source/solve/solve_long.c\
			
SRCS_B =	source/checker.c

OBJS = ${SRCS:.c=.o}

OBJS_B = ${SRCS_B:.c=.o}

$(NAME): $(OBJS)
		make all -C ft_libft/
		$(CC) $(FLAGS) $(INCLUDES) $(SRCS)
		ar -rcs $(NAME) $(OBJS)
		rm -rf a.out

$(NAME_B): $(OBJS_B)
		make all -C ft_libft/
		$(CC) $(FLAGS) $(INCLUDES_B) $(SRCS_B)
		ar -rcs $(NAME_B) $(OBJS_B)
		rm -rf a.out

$(EXE): $(NAME) $(LIBFT)
		gcc -Wall -Wextra -Werror -o push_swap $(NAME) $(LIBFT) 

$(EXE_B): $(NAME_B) $(LIBFT)
		gcc -Wall -Wextra -Werror -o checker $(NAME_B) $(LIBFT_B) 

all: mandatory bonus

mandatory: $(NAME) $(EXE)

bonus: $(NAME_B) $(EXE_B)

clean : 
		rm -rf $(OBJS)
		rm -rf $(OBJS_B)
		rm -rf library/push_swap.h.gch
		rm -rf library/checker.h.gch	
		make clean -C ft_libft/
fclean : clean
		rm -rf $(NAME) $(EXE)
		rm -rf $(NAME_B) $(EXE_B)		
		rm -rf ./bin
		make fclean -C ft_libft/

re : fclean all

.PHONY : all bonus clean fclean re