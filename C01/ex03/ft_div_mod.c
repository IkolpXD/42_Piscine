/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:28:13 by made-jes          #+#    #+#             */
/*   Updated: 2024/09/25 19:13:30 by made-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)

{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

/*#include <stdio.h>

int	main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 45;
	b = 3;
	div = 0;
	mod = 0;

	ft_div_mod(a, b, &div, &mod);
	printf("%d\n%d\n", div, mod);
	return (0);
}*/
