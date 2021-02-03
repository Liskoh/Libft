# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hjordan <hjordan@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/14 11:03:02 by hjordan           #+#    #+#              #
#    Updated: 2021/02/03 17:38:02 by hjordan          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
CC=gcc
CFLAGS= -Wall -Wextra -Werror
RM=rm -f
SRCS_PATH=srcs
CHARS_PATH=$(SRCS_PATH)/chars
INTEGERS_PATH=$(SRCS_PATH)/integers
LISTS_PATH=$(SRCS_PATH)/lists
MEMORY_PATH=$(SRCS_PATH)/memory
OUTPUTS_PATH=$(SRCS_PATH)/outputs
STRINGS_PATH=$(SRCS_PATH)/strings
GNL_PATH=$(SRCS_PATH)/gnl
FT_PRINTF_PATH=$(SRCS_PATH)/ft_printf
FT_PRINTF_CONVERTERS_PATH=$(FT_PRINTF_PATH)/converters
FT_PRINTF_BONUS_PATH=$(FT_PRINTF_PATH)/bonus

SRCS= $(CHARS_PATH)/ft_isalnum.c \
	  $(CHARS_PATH)/ft_isalpha.c \
	  $(CHARS_PATH)/ft_isascii.c \
	  $(CHARS_PATH)/ft_isdigit.c \
	  $(CHARS_PATH)/ft_isprint.c \
	  $(CHARS_PATH)/ft_tolower.c \
	  $(CHARS_PATH)/ft_toupper.c \
	  $(INTEGERS_PATH)/ft_atoi.c  \
	  $(LISTS_PATH)/ft_lstadd_back.c  \
	  $(LISTS_PATH)/ft_lstadd_front.c  \
	  $(LISTS_PATH)/ft_lstclear.c  \
	  $(LISTS_PATH)/ft_lstdelone.c  \
	  $(LISTS_PATH)/ft_lstiter.c  \
	  $(LISTS_PATH)/ft_lstlast.c  \
	  $(LISTS_PATH)/ft_lstnew.c  \
	  $(LISTS_PATH)/ft_lstsize.c  \
	  $(MEMORY_PATH)/ft_bzero.c  \
	  $(MEMORY_PATH)/ft_calloc.c  \
	  $(MEMORY_PATH)/ft_memccpy.c  \
	  $(MEMORY_PATH)/ft_memchr.c  \
	  $(MEMORY_PATH)/ft_memcmp.c  \
	  $(MEMORY_PATH)/ft_memcpy.c  \
	  $(MEMORY_PATH)/ft_memmove.c  \
	  $(MEMORY_PATH)/ft_memset.c  \
	  $(MEMORY_PATH)/ft_str_del.c  \
	  $(OUTPUTS_PATH)/ft_putchar_fd.c  \
	  $(OUTPUTS_PATH)/ft_putendl_fd.c  \
	  $(OUTPUTS_PATH)/ft_putnbr_fd.c  \
	  $(OUTPUTS_PATH)/ft_putstr_fd.c  \
	  $(OUTPUTS_PATH)/ft_putstr.c  \
	  $(OUTPUTS_PATH)/ft_putchar.c  \
	  $(STRINGS_PATH)/ft_itoa.c \
	  $(STRINGS_PATH)/ft_unsigned_itoa.c \
	  $(STRINGS_PATH)/ft_itoa_base.c \
	  $(STRINGS_PATH)/ft_split.c \
	  $(STRINGS_PATH)/ft_strchr.c \
	  $(STRINGS_PATH)/ft_strdup.c \
	  $(STRINGS_PATH)/ft_strjoin.c \
	  $(STRINGS_PATH)/ft_strlcat.c \
	  $(STRINGS_PATH)/ft_strlcpy.c \
	  $(STRINGS_PATH)/ft_strlen.c \
	  $(STRINGS_PATH)/ft_strmapi.c \
	  $(STRINGS_PATH)/ft_strncmp.c \
	  $(STRINGS_PATH)/ft_strnstr.c \
	  $(STRINGS_PATH)/ft_strrchr.c \
	  $(STRINGS_PATH)/ft_strtrim.c \
	  $(STRINGS_PATH)/ft_substr.c \
	  $(STRINGS_PATH)/ft_ltoa_base.c \
	  $(STRINGS_PATH)/ft_join_and_free.c \
	  $(GNL_PATH)/get_next_line.c \
	  $(FT_PRINTF_PATH)/ft_printf.c \
	  $(FT_PRINTF_PATH)/flag_utils.c \
	  $(FT_PRINTF_PATH)/pf_utils.c \
	  $(FT_PRINTF_PATH)/pf_parser.c \
	  $(FT_PRINTF_PATH)/pf_conversion.c \
	  $(FT_PRINTF_CONVERTERS_PATH)/ft_convert_percentage.c \
	  $(FT_PRINTF_CONVERTERS_PATH)/ft_convert_char.c \
	  $(FT_PRINTF_CONVERTERS_PATH)/ft_convert_int.c \
	  $(FT_PRINTF_CONVERTERS_PATH)/ft_convert_string.c \
	  $(FT_PRINTF_CONVERTERS_PATH)/ft_convert_unsigned_int.c \
	  $(FT_PRINTF_CONVERTERS_PATH)/ft_convert_hexadecimal.c \
	  $(FT_PRINTF_CONVERTERS_PATH)/ft_convert_pointer.c \
	  $(FT_PRINTF_CONVERTERS_PATH)/extra_converters.c \
	  $(FT_PRINTF_BONUS_PATH)/ft_apply_size_converter.c
OBJS=$(SRCS:.c=.o)
INC=includes/libft.h

%.c%.o:
	$(CC) $(CFLAGS) -c $< -o $@ $(INC)

all:	$(NAME)

$(OBJS):	$(INC)

$(NAME): 	$(INC) $(OBJS)
	ar rcs $(NAME) $(OBJS)
	
clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: 	clean
	$(RM) $(NAME)

re:		fclean all
