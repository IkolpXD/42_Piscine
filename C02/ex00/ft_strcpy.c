/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 20:18:45 by made-jes          #+#    #+#             */
/*   Updated: 2024/09/28 13:54:41 by made-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != ('\0'))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = ('\0');
	return (dest);
}

/*#include <stdio.h>

int	main(void)
{
	char	dest[] = "Hello";
	char	src[] = "Little";
	
	ft_strcpy(dest, src);
	printf("%s", dest);
	return (0);
}*/
