/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 12:33:17 by made-jes          #+#    #+#             */
/*   Updated: 2024/09/29 12:39:52 by made-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != ('\0'))
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	char	*str1 = "ola";
	char	*str2 = "HI";
	char	*str3 = "1234";
	char	*str4 = "";

	printf("%d\n", ft_str_is_lowercase(str1));
	printf("%d\n", ft_str_is_lowercase(str2));
	printf("%d\n", ft_str_is_lowercase(str3));
	printf("%d\n", ft_str_is_lowercase(str4));
}*/
