/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlandol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 13:09:53 by chlandol          #+#    #+#             */
/*   Updated: 2020/10/22 18:45:26 by chlandol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int i;

	if (size < 2)
		return ;
	i = 0;
	while (i < size - 1)
	{
		if (tab[i] < tab[i + 1])
			i++;
		else
		{
			ft_swap(&tab[i], &tab[i + 1]);
			i++;
		}
	}
	ft_sort_int_tab(tab, size - 1);
}
