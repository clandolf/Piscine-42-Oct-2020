/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlandol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 09:10:48 by chlandol          #+#    #+#             */
/*   Updated: 2020/10/23 09:10:58 by chlandol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while(*(str + i))
	{
	if (*(str + i) >= 65 && *(str + 1) <= 90)
	*(str + i) += 32;
	i++;
	}
	return (str);
}

// *s; s = str; *s; s++
