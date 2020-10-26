/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlandol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 09:11:15 by chlandol          #+#    #+#             */
/*   Updated: 2020/10/26 19:43:50 by chlandol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcapitalize(char *str)
{
    int i;

    i = 0;

    while (str[i++] != '\0')
    {
        if ((str[i - 1] == ' ') || (i == 0)
				|| ((str[i - 1] >= 0) && (str[i - 1] <= 47))
				|| ((str[i - 1] >= 58) && (str[i - 1] <= 64))
				|| ((str[i - 1] >= 123) && (str[i - 1] <= 126)))

        {
            if ((str[i] >= 97) && (str[i] <= 122))
                str[i] -= 32;
        i++;
        }
        if ((str[i] >= 65) && (str[i] <= 90))
            str[i] += 32;
    }
    return (str);
}


int main (void)
{
    char str[] = "N'oublies$pas\nd'eteindre*1la lumier3, ++ 41 OUI";

    printf("%s", ft_strcapitalize(str));
}
