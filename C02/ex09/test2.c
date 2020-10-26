/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlandol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 09:11:15 by chlandol          #+#    #+#             */
/*   Updated: 2020/10/26 15:59:25 by chlandol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcapitalize(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == ' ')
		{
			if ((str[i + 1] >= 97) && (str[i + 1] <= 122))
				str[i] -= 32;
		i++;
		}
		if ((str[i] >= 65) && (str[i] <= 90))
			str[i] += 32;
	i++;
	}
	return (str);
}

int main (void)
{
printf("%s", ft_strcapitalize("N'oublies pas d'eteindre 1la lumier3, ++ 41 OUI"));
}
