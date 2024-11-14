/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 12:09:04 by made-jes          #+#    #+#             */
/*   Updated: 2024/09/28 13:44:05 by made-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < (size / 2))
	{
		tmp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = tmp;
		i++;
	}
}

/*#include <stdio.h>

int	main(void)
{
	int array[] = {0, 1, 2, 3, 4, 5};
	int size;
	int i;
	
	i = 0;
	size = 6;
	ft_rev_int_tab(array, size);
	while(i < size)
	{
		printf("%d", array[i]);
		i++;
	}
	return (0);
}*/
