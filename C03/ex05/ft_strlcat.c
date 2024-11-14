/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 18:21:46 by made-jes          #+#    #+#             */
/*   Updated: 2024/10/02 18:29:11 by made-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_d;
	unsigned int	len_s;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	len_d = ft_strlen(dest);
	len_s = ft_strlen(src);
	if (size == 0 || size <= len_d)
	{
		return (len_s + size);
	}
	while (src[i] != '\0' && i < size - len_d - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (len_d + len_s);
}

/*#include <stdio.h>

int	main(void)
{
	char dest[] = "hi";
	char src[] = "bicho";
	
	printf("Result: %i\n", ft_strlcat(dest, src, 0));
	printf("Destination string: %s\n", dest);
}*/
