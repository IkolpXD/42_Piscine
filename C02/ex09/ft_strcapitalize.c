/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 15:16:40 by made-jes          #+#    #+#             */
/*   Updated: 2024/09/29 15:25:38 by made-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	i1;

	ft_lowercase(str);
	i = 0;
	i1 = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i1 == 1)
				str[i] -= 32;
			i1 = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			i1 = 0;
		}
		else
		{
			i1 = 1;
		}
		i++;
	}
	return (str);
}

/*#include <stdio.h>

int	main()
{
	char a[] = "ola, tud:o bem";
	char b[] = "cinquenta+um";
	char c[] = "42pala;vras";
	char d[] = "oLa,tUdo Bem";

	printf("%s\n", ft_strcapitalize(a));
	printf("%s\n", ft_strcapitalize(b));
	printf("%s\n", ft_strcapitalize(c));
	printf("%s\n", ft_strcapitalize(d));
	return (0);
}*/
