/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 14:05:20 by made-jes          #+#    #+#             */
/*   Updated: 2024/10/06 14:26:30 by made-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0 && nb == 0)
	{
		return (1);
	}
	if (power == 0 && nb >= 1)
	{
		return (1);
	}
	while (power >= 1)
	{
		result *= nb;
		power--;
	}
	return (result);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_iterative_power(0, 0));
	printf("%d\n", ft_iterative_power(2, 0));
	printf("%d\n", ft_iterative_power(2, 2));
	printf("%d\n", ft_iterative_power(-2, 2));
	printf("%d\n", ft_iterative_power(2, -2));
}*/
