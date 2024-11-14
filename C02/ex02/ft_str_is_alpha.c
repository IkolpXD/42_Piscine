/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 19:17:13 by made-jes          #+#    #+#             */
/*   Updated: 2024/09/29 12:07:47 by made-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != ('\0'))
	{
		if (!(str[i] >= 65 && str[i] <= 90))
		{
			if (!(str[i] >= 97 && str[i] <= 122))
			{
				return (0);
			}
		}
		i++;
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	char	*str1 = "abc";
	char	*str2 = "DEF";
	char	*str3 = "123pinguim";
	char	*str4 = "";

	printf("%d\n", ft_str_is_alpha(str1));
	printf("%d\n", ft_str_is_alpha(str2));
	printf("%d\n", ft_str_is_alpha(str3));
	printf("%d\n", ft_str_is_alpha(str4));
	return (0);
}*/
