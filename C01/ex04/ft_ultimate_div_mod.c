/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:32:59 by made-jes          #+#    #+#             */
/*   Updated: 2024/09/25 19:40:42 by made-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a;
	mod = *b;
	if (mod != 0)
	{
		*a = div / mod;
		*b = div % mod;
	}
}

/*#include <stdio.h>

int	main(void)
{
	int a;
	int b;

	a = 10;
	b = 2;
	
	ft_ultimate_div_mod(&a, &b);
	printf("%d\n%d\n", a, b);
	return (0);
}*/
