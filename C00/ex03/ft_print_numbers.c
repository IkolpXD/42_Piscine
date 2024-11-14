/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-jes <made-jes@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 18:56:20 by made-jes          #+#    #+#             */
/*   Updated: 2024/09/21 19:02:49 by made-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_numbers(void)
{
	char	c;

	c = '0';
	while (c <= '9')
	{
		write(1, &c, 1);
		c++;
	}
}
/*int	main(void)
{
	ft_print_numbers();
	return (0);
}*/
