# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oukhiar <oukhiar@student.1337.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/06 10:04:03 by oukhiar           #+#    #+#              #
#    Updated: 2024/11/06 10:09:34 by oukhiar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Define source files
SRCS = ft_calloc.c       ft_isascii.c      ft_itoa.c         ft_lstsize.c      ft_memcpy.c       ft_putchar_fd.c   ft_putstr_fd.c    ft_strdup.c       ft_strlcat.c      ft_strmapi.c      ft_strrchr.c      ft_tolower.c      main.c
ft_atoi.c         ft_isalnum.c      ft_isdigit.c      ft_lstadd_front.c ft_memchr.c       ft_memmove.c      ft_putendl_fd.c   ft_split.c        ft_striteri.c     ft_strlcpy.c      ft_strncmp.c      ft_strtrim.c      ft_toupper.c
ft_bzero.c        ft_isalpha.c      ft_isprint.c      ft_lstnew.c       ft_memcmp.c      ft_memset.c       ft_putnbr_fd.c    ft_strchr.c       ft_strjoin.c      ft_strlen.c       ft_strnstr.c      ft_substr.c

# Define output file
NAME = libft.a

# Compile and link everything
$(NAME): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

# Clean up object files
clean:
	rm -f *.o

# Remove the compiled binary
fclean: clean
	rm -f $(NAME)

# Rebuild everything
re: fclean $(NAME)
