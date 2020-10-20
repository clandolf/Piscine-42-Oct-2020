# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_print_numbers                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chlandol <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/15 18:58:58 by chlandol          #+#    #+#              #
#    Updated: 2020/10/15 19:00:00 by chlandol         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	char c;

	c = '0';
	while (c <= '9')
	{
		ft_putchar(c);
		c++;
	}
}
