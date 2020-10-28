/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlandol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 12:37:07 by chlandol          #+#    #+#             */
/*   Updated: 2020/10/22 12:40:34 by chlandol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_combn(int n)
{
	char	list[11];
	int		i;

	list[0] = '0';
	i = 0;
	while (++i < n)
	{
		list[i] = list[i - 1] + 1;
		list[n] = ',';
		list[n + 1] = ' ';
	}
	while (list[0] <= ':' - n)
	{
		write(1, list, n + ((list[0] != ':' - n) ? 2 : 0));
		i = n;
		while (i--)
		{
			if (++list[i] <= ':' - n + i)
				break ;
		}
		while (++i > 0 && i < n)
			list[i] = list[i - 1] + 1;
	}
}
