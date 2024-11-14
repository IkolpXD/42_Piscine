/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 17:44:55 by made-jes          #+#    #+#             */
/*   Updated: 2024/09/29 16:06:18 by made-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != ('\0') && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	if (n == 0)
	{
		return (dest);
	}
	while (i < n)
	{
		dest[i] = ('\0');
		i++;
	}
	return (dest);
}

/*#include <stdio.h>

int	main(void)
{
	char	src[] = "Hello World";
	char	dest[15];
	
	unsigned int n = 5;
	
	printf("%s\n", ft_strncpy(dest, src, n));
	return (0);
}*/
