/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 12:56:26 by made-jes          #+#    #+#             */
/*   Updated: 2024/10/06 18:17:11 by made-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	countminus;
	int	i;
	int	number;

	i = 0;
	countminus = 0;
	number = 0;
	while (((str[i] >= 9 && str[i] <= 13) || str[i] == 32) && str[i] != '\0')
		i++;
	while ((str[i] == '+' || str[i] == '-') && str[i] != '\0')
	{
		if (str[i] == '-')
			countminus++;
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9') && str[i] != '\0')
	{
		number *= 10;
		number += str[i] - '0';
		i++;
	}
	if (countminus % 2 == 0)
		return (number);
	else
		return (-number);
}

/*#include <stdio.h>

int	main(void)
{
	char	s[] = " ---+--+1234ab567";

	printf("%d\n", ft_atoi(s));
	return (0);
}*/
