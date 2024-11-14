/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 17:24:55 by made-jes          #+#    #+#             */
/*   Updated: 2024/10/06 17:40:33 by made-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == i)
	{
		return (i);
	}
	while (i < nb)
	{
		if (i * i == nb)
		{
			return (i);
		}
		else
		{
			i++;
		}
	}
	return (0);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_sqrt(3));
	printf("%d\n", ft_sqrt(64));
}*/
