/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlandol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 09:11:15 by chlandol          #+#    #+#             */
/*   Updated: 2020/10/23 09:11:26 by chlandol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcapitalize(char *str)
{
	int i;
	
	i = 0;
	while (str[i] != '\0')
	{
	if((str[i] >= 'a' && str[i] <= 'z'))
	str[i] = str[i] - 32;
	else if((str[i] >= 'A' && str[i] <= 'Z'))
	str[i] = str[i] + 32;
	}
	if (str[i] == ' ')
	{
	++i;
	if (str[i] >= 'a' && str[i] <= 'z')
	str[i] = str[i] - 32;
	else if(str[i] >= 'A' && str[i] <= 'Z')
	str[i] = str[i] + 32;
	}
	return (0);
}
