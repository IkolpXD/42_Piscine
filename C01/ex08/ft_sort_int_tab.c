/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 16:01:27 by made-jes          #+#    #+#             */
/*   Updated: 2024/09/28 16:03:31 by made-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = 0;
		}
		else
		{
			i++;
		}
	}
}

/*#include <stdio.h>

int	main(void)
{
	int array[] = {8, 1, 6, 4, 7, 0};
	int size;
	int i;
	
	i = 0;
	size = 6;
	ft_sort_int_tab(array, size);
	while(i < size)
	{
		printf("%d", array[i]);
		i++;
	}
	return (0);
}*/
