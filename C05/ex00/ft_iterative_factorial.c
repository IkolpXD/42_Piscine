/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 12:22:53 by made-jes          #+#    #+#             */
/*   Updated: 2024/10/06 12:51:34 by made-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb != 0)
	{
		result *= nb;
		nb --;
	}
	return (result);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_iterative_factorial(-2));
	printf("%d\n", ft_iterative_factorial(0));
	printf("%d\n", ft_iterative_factorial(5));
	return (0);
}*/
