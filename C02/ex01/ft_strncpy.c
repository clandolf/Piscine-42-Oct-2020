/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlandol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 09:06:57 by chlandol          #+#    #+#             */
/*   Updated: 2020/10/23 10:03:36 by chlandol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while(i < n)
	{	
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int	main()
{
	int n = 4; 
	char dest[] = "Bonjour";
	char src[] = "Ciao";
	printf("%s\n", ft_strncpy(dest, src, n));
	return(0);
}
