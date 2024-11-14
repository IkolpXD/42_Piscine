/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:20:12 by made-jes          #+#    #+#             */
/*   Updated: 2024/09/30 18:21:14 by made-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	if (size == 0)
	{
		return (i);
	}
	j = 0;
	while (src[j] != ('\0') && j < size - 1)
	{
		dest[j] = src[j];
		j++;
	}
	if (size > 0)
	{
		dest[j] = '\0';
	}
	return (i);
}

/*#include <stdio.h>

int	main()
{
	char	src[] = "hello";
	char	dest[3] = "";
	unsigned int	result = ft_strlcpy(dest, src, 3);
	
	printf("Result lenght: %u\n", result);
	printf("Destination string, %s\n", dest);
	return (0);
}*/
