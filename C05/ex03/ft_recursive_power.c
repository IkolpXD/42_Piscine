/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 15:29:11 by made-jes          #+#    #+#             */
/*   Updated: 2024/10/06 15:31:15 by made-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if (power < 1)
	{
		return (1);
	}
	return (nb * ft_recursive_power(nb, (power - 1)));
}

#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_recursive_power(0, 2));
	printf("%d\n", ft_recursive_power(0, 0));
	printf("%d\n", ft_recursive_power(-2, 2));
	printf("%d\n", ft_recursive_power(2, 0));
}
