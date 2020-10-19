/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avilleta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 14:35:30 by avilleta          #+#    #+#             */
/*   Updated: 2020/10/17 19:37:46 by chlandol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_line(int x, char left, char mid, char right)
{
	if (x-- >= 1)
	{
		ft_putchar(left);
		while (x-- >= 2)
		{
			ft_putchar(mid);
			if (x == 1)
			{
				ft_putchar(right);
			}
		}
		ft_putchar('\n');
	}
}

void	ft_midline(int x, int y, char wall)
{
	int i;

	while (y-- > 2)
	{
		ft_putchar(wall);
		i = 2;
		while (x > i++)
		{
			ft_putchar(' ');
		}
		if (x > 1)
		{
			ft_putchar(wall);
		}
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		return ;
	}
	if (y >= 1)
	{
		ft_line(x, 'A', 'B', 'C');
		ft_midline(x, y, 'B');
	}
	if (y >= 2)
	{
		ft_line(x, 'A', 'B', 'C');
	}
}
