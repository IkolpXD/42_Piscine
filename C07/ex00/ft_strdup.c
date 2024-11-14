/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:47:05 by made-jes          #+#    #+#             */
/*   Updated: 2024/10/09 19:12:14 by made-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*nova_string;
	int	i;
	int	lenght;

	lenght = ft_strlen(src);
	nova_string = (char *) malloc(sizeof(char) * (lenght + 1)));
	i = 0;
	if (!nova_string)
	{
		return (NULL);
	}
	while (src[i] && i < lenght)
	{
		nova_string[i] = src[i];
		i++;
	}
	nova_string[i] = '\0';
	return (nova_string);
}

/*#include <stdio.h>

int	main()
{
	printf("%s", ft_strdup("hello"));
	return (0);
}*/
